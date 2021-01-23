#include<iostream>
#include<string>

using namespace std;
int main()
 {
	int T;
	cin>>T;
	while (T--)
    {
	    string s;
	    int isPresent[26] = {false};
	    cin>>s;
	    for(int i = 0; i < s.length(); i++)
	    {
	        
	        isPresent[s[i]-'a'] =  true;
	    }
	    int k;
	    cin>>k;
	    int count = 0;
	    for(int i = 0 ; i < 26; i++){
	        if(isPresent[i] == false)
	            count++;
	    }
	    if(count > k)
	        cout<<0<<endl;
	    else
	        cout<<1<<endl;
	 }
	return 0;
}