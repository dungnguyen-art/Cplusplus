#include<iostream>
#include<algorithm>
using namespace std;
//cre: pg spoj
main(){
    int t;
    cin >> t;
    while (t--)
    {
	int i,j,n, a[1000], l[1000];
	cin >> n;
	for(i=0; i<n; i++){
		cin >> a[i];
	}
	l[0]=1;
	int lmax;
	for(i=0; i<n; i++){
		lmax=0;
		for(j=0; j<i; j++){
			if(a[i] > a[j]){
				if(l[j] > lmax){
					lmax=l[j];
				}
			}
		}
		l[i]=lmax+1;
	}
	/*
	int max=0;
	for(i=0; i<n; i++){
		if(l[i] > max) max=l[i];
	}
	cout << max;
	*/
	sort(l,l+n);
	cout << l[n-1];
    cout<<endl;
    }
	return 0;
}