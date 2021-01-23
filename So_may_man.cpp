#include<iostream>
#include<string>

int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        std::string s;
        std::cin>>s;
        if(s[s.size()-1] == '6' && s[s.size()-2] == '8')
            std::cout << 1 <<std::endl;
        else std::cout<<0<<std::endl;
    }
}