#include<bits/stdc++.h>
using namespace std;

int eqb4(string s)
{
    if(s=="00")
    return 0;
    else if(s=="01")
    return 1;
    else if(s=="10")
    return 2;
    else
    return 3;
}
int main()
 {
   int t;
   cin>>t;
   while(t--)
   {
       string s;
       cin>>s;
       
       if(s.length()%2)
       s=s+'0';
       
     int odd=0,even=0;
     int isdigit=1;
     for(int i=0;i<s.length();i=i+2)
     {
         if(isdigit)
         odd+=eqb4(s.substr(i,2));
         else
         even+=eqb4(s.substr(i,2));
         if(isdigit)
         isdigit=0;
         else
         isdigit=1;
         
      }
      if(abs((even-odd)%5==0))
      cout<<"Yes"<<endl;
      else
      cout<<"No"<<endl;
   }
}