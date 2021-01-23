#include<iostream>
#include<string>

using namespace std;
int main()
 {
   int t;
   cin>>t;
   while(t--)
   {  
       string s;
       cin>>s;
       int odd=0,even=0;
       for(int i=0;i<s.length();i++)
       {
           if(i%2==0)
           odd+=(s[i]-'0');
           else
           even+=(s[i]-'0');
       }
       
       if((odd-even)%11==0)
       cout<<1<<endl;
       else
       cout<<0<<endl;
   }
}