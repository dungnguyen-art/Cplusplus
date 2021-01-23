#include<bits/stdc++.h>
using namespace std;
//cre: duy thai
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string m,n;
		cin >> m >> n;
		int kq[1005]={0};
		int size_m=m.length(),size_n=n.length();
		if(size_m<size_n){
			swap(m,n);
			swap(size_m,size_n);                              
		}
		cout<<size_m<<" "<<size_n<<endl;
		n.insert(0,size_m-size_n,'0');
		int temp=0,nho=0;
		for(int i=size_m-1;i>=0;i--)
		{
			temp=(m[i]-'0')+(n[i]-'0')+nho;
			if(temp>=10)
			{
				kq[i]=temp-10;
				nho=1;
				if(i==0)
				{
					cout << 1;
				}
			}else
			{
				kq[i]=temp;
			}	
		}
		for(int i=0;i<size_m;i++)
		{
			cout << kq[i];
		}
		cout << endl;
	}
	return 0;
}