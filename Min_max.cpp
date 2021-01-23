#include<bits/stdc++.h>
using namespace std;

using namespace std;

int main() {
	    int sum,d,a;
	    cin>>sum>>d;
	    if(sum>9*d)
	    cout<<"-1"<<endl;
	    else{
	    for(int i=0;i<d;i++){
	        a=sum-9*(d-1-i);
	        if(a<=0&&i==0)
	            a=1;
	        else if(a<0)
	            a=0;
	        cout<<a;
	        sum-=a;
	        }
	        cout<<endl;
	    }
}