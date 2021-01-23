#include<iostream>
#include<vector>


int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        long n,X;
        std::cin>>n>>X;
        std::vector<long>myvector;
         long num;
        for(long i = 1;i<=n;i++){
            std::cin >> num;
            myvector.push_back(num);
        }
        int kt = 0;
        for(long i=1;i<=n;i++){
            if(myvector[i]==X){
                kt = 1;
                std::cout << i+1;
                std::cout << std::endl;
                break;
            }
        }
        if(kt == 0) std::cout<<-1<<std::endl;
    }
}