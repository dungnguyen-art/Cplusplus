#include<bits/stdc++.h>
using namespace std;
int d[1000000];
int main() { int t; cin>>t;
	while(t--) 
	{
		int n,a;
		cin>>n;
		memset(d,0,sizeof(d));
		bool ok=false;
		for(int i=0; i<n; i++) 
		{ 
			cin>>a;
			d[a]+=1;
			if(d[a]>1&&ok==false) 
			{ 
				cout<<a; ok=true;
			} 
		} 
		if(ok==false) cout<<-1;
		cout<<endl;
	} 
}