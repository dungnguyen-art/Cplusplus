#include<iostream>
#include<cmath>

int isPrime(int n){
    int i;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i == 0)
        {
            return 0;
        }
    
    }
    return 1;
}
int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        int n;
        std::cin>>n;
        bool kt = true;
        for (int i = 2; i <= n/2; i++)
        {
            int flag1 = isPrime(i);
            int flag2 = isPrime(n-i);
            if (flag1 && flag2)
            {
                kt = false;
                std::cout<<i<<" "<<n-i;
                break;
            }
            
        }
        if (kt)
        {
            std::cout<<-1;
        }
        
        std::cout<<std::endl;
    }
    
}