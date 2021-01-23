#include<iostream>
typedef long long ll;
int GCD (ll x, ll y){
        if(x==0)
            return y;
        return GCD(y%x,x);
}

int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        ll a,x,y;
        std::cin>>a>>x>>y;
        ll tmp;
        tmp = GCD(x,y);
        while (tmp--)
        {
            std::cout<<a;
        }
        std::cout<<std::endl;
    }
}