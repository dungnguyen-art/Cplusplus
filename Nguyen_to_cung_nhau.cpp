#include<iostream>
#include<math.h>
using namespace std;

int snt(int n){
	if(n<2)
	    return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
		    return 0;
	}
	return 1;
}

int dem(int n){
	int res=n;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0)
			    n/=i;
			res=res-res/i;
		}
	}
	if(n>1)
	    res=res-res/n;
	return res;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		if(snt(dem(n)))
		    cout<<"1"<<endl;
		else
		    cout<<"0"<<endl;
	}
	return 0;
}