#include<iostream>
#include<string>
#include<vector>

int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        std::string s;
        std::cin>>s;
        std::vector<int>myvector(100000,0);
        for (int i = 0; i < s.size(); i++)
        {
            myvector[s[i]]++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if(myvector[s[i]] == 1)
                std::cout<<s[i];
        }
        std::cout<<std::endl;
        myvector.clear();
    }

}