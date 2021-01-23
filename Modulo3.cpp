#include<iostream>

int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        long long n,k,rest=0,sum = 0;
        long long sum1 = 0,sum2;
        std::cin>>n>>k;
        if(k == 0) std::cout<<0<<std::endl;
        else{
        long long tmp = 0;
        tmp = n/k;
        sum1 = (n+1)*n/2;
        rest = n - tmp * k;
        sum2 = (rest+1)*rest/2;
        sum = tmp * sum1 + sum2;
        std::cout << sum<<std::endl;
        }
    }
}