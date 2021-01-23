#include<iostream>
#include<vector>

int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        std::vector<int>myvector;
        int n,X;
        std::cin>>n>>X;
        int num;
        for(int i=1;i<= n;i++){
            std::cin>>num;
            myvector.push_back(num);
        }
        int kt = 0;
        for (int i = 1; i <= n; i++)
        {
            if(myvector[i] == X){
                kt = 1;
                std::cout<<1<<std::endl;
                break;
            }
        }
        if(kt == 0) std::cout<<-1<<std::endl;
    }
    
}