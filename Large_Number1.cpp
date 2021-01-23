#include<bits/stdc++.h>
void swapPointer(char** a,char** b)
{
	char* temp = *a;
	*a = *b;
	*b = temp;
}
void subBigNumber(char* number1, char* number2)
{
	bool remember = false;  /*bien nho giong phep tru binh thuong*/
	if(strlen(number1)<strlen(number2)){
		swapPointer(&number1,&number2);
	}
	else if(strlen(number1) == strlen(number2)){ /*kiem tra xem so nao lon hon*/
		for(int i=strlen(number1)-1;i>=0;i--){
			if(number1[i]<number2[i])
				swapPointer(&number1,&number2);
		}
	}
	size_t number1len = strlen(number1);
	size_t number2len = strlen(number2);
	char *result = new char[number1len+1];
	memset(result,'0',number1len);	/*bien tat ca ky tu trong mang result thanh ky tu '0'*/
	// std::cout<<result<<std::endl;
	for(int i=0;i<number2len;i++){
		int temp = number1[number1len-i-1] - number2[number2len-i-1];
		if(remember) temp--;
		if(temp<0){
			temp+=10;
			remember=true;
		}
		else remember=false;
		result[number1len-i-1] = temp + '0';
	}
	// std::cout<<result<<std::endl;
	for(int i=0;i<number1len - number2len;i++){
		int temp = number1[number1len-number2len-i-1]-'0';
		if(remember) temp--;
		if(temp<0){
			temp+=10;
			remember = true;
		}
		else remember = false;
		result[number1len-number2len-i-1]= temp + '0';
	}
	result[number1len] = '\0';/*dau ket thuc chuoi*/
	std::cout<<result<<std::endl;
	delete[] result;
}
int main()
{
	int T;
	char number1[1000];
	char number2[1000];
	std::cin>>T;
	while(T--){
		std::cin>>number1;
		std::cin>>number2;
		subBigNumber(number1,number2);
	}
	return 0;
}