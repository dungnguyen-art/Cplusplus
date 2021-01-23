#include<iostream>

int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        long long n,k,sum = 0;
        std::cin>>n>>k;
        sum = (n+1)*n/2;
        if(sum ==  k) std::cout<<1<<std::endl;
        else std::cout<<0<<std::endl;
    }
}