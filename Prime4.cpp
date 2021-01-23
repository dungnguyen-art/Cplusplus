#include<iostream>

int prime(int x){
    bool check[x+1] = {true};
    check[1] = false;
    check[0] = false;
    for (int i = 2; i * i <=  x; i++)
    {
        if(check[i] == true){
            for (int  j = i*i; j <= x; j+=i)
            {
                check[j] = false;
            }
        }

    }
}
int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        int n;
        std::cin>>n;
        std::cout<<1<<" ";
        for (int i = 2; i <= n; i++)
        {
            if(i%2 == 0){
                std::cout<<2<<" ";
            }
            else
            {
                int j = 3;
                while (i%j != 0)
                {
                    j+=2;
                    if(j == i) break;
                }
                std::cout <<j<<" ";
            }
            
        }
        std::cout<<std::endl;
    }
}