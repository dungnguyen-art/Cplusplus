#include <bits/stdc++.h>
using namespace std;
long long M=pow(10,9)+7;

long long luythua(long long dem,long long m){
    if(m==0)
        return 1;	

    if(m%2==0)
        return (luythua(dem,m/2)%M*luythua(dem,m/2)%M)%M;
    else 
        return (dem%M*luythua(dem,m/2)%M*luythua(dem,m/2)%M)%M;
}

int main(){
    int test;
    cin >> test;
    while(test--){
	    long long n;
	    cin >> n;
	    long long arr[n];
	    for(int i=0;i<n;i++){
		    cin >> arr[i];
	}
	int dem=0;
	for(long long i=10000;i>=1;i--){
		for(long long j=0;j<n;j++){
			if(arr[j]%i==0)
			    dem++;
			else
			    break;
		}
		if(dem==n)
		{
			dem=i;
			break;
		}
		dem=0;
	}
	long long tich=1;
	for(int i=0;i<n;i++){
		tich*=arr[i];
		tich=tich%M;
	}
 	cout << luythua(tich,dem) << endl;
	
	
	
}



return 0;
}