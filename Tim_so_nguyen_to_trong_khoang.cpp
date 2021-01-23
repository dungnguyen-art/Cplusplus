#include<iostream>
#include<algorithm>

long long snt(long a,long b){
    bool prime[b+1];
    for (long long i = 0; i <= b; i++)
    {
        prime[i] = true;
    }
    
    prime[0] = false;
    prime[1] = false;

    for (long long i = 2; i*i<= b; i++)
    {
        if(prime[i] == true){
            for (long long j = i*i; j <= b; j+=i)
            {
                prime[j] = false;
            }
        }
    }
    for (long long  i = a; i <= b; i++)
    {
        if(prime[i])
            std::cout << i <<" ";
    }
    return 0;
}
int main(){
    long long a,b;
    std::cin>>a>>b;
    if(a>b){
        std::swap(a,b);
    }
    snt(a,b);
}