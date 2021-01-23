#include<iostream>
#include<string>
using namespace std;

unsigned countWords(string &str)
{
    int state = 0,i=0;
    unsigned wc = 0; 
    while (str[i]!='\0')
    {
        if (str[i] == ' ' || str[i]=='\n'|| str[i] =='\t' ){
            state = 0;
        }
        else if (state == 0)
        {
            state = 1;
            ++wc;
        }
        i++;
    }
 
    return wc;
}
int main(void)
{
    int t;
    cin>>t;
    cin.ignore();
    while(tc--)
    {
        string S;
	    cin.clear();
	    getline(cin,S);
        cout<<countWords(S)<<endl;
    }
    return 0;
}
