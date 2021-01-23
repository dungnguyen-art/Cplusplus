#include <iostream>

using namespace std;

void Solution(){
	string s;
	cin>>s;
	int dem=0,t;

	t = s.find("100");
    cout<<t<<" ";
	while (t>=0&&t<s.length())
		{
			s.erase(s.begin()+t,s.begin()+t+3);
			dem+=3;
			t=s.find("100");
		}
	cout<<dem<<endl;
}


int main(){
	int t;
	cin>>t;
	while (t--) Solution();
	return 0;
}