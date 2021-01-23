#include<iostream>
#include<algorithm>

long long GCD4(long long a, long long b){
    if(!a)
        return b;
    return GCD4(b%a,a);
}

long long Modulo(long long a, std::string b){
        long long num = 0;
        int i = 0;
        int n = b.size();
        while (n--)
        {
            num = (num*10 + b[i]-'0') % a;
            i++;
        }
        return num;
}

long long GCDLarge(long long a, std::string b){
    long long tmp = Modulo(a,b);
    return GCD4(a,tmp);
}

int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        long long a;
        std::string b;
        std::cin>>a>>b;
        std::cout<<Modulo(a,b)<<" ";
        std::cout<<GCDLarge(a,b)<<std::endl;
    }
    return 0;
}