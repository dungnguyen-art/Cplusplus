#include<iostream>
#include<vector>

int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        int n,X;
        std::cin>>n>>X;
        int num;
        int count = 0;
        std::vector<int>myvector;
        for (int i = 0; i < n; i++)
        {
            std::cin>>num;
            if(num == X)
                count ++;
            myvector.push_back(num);
        }
        if(count > 0) std::cout<<count<<std::endl;
        else std::cout<<-1<<std::endl;
    }
}