#include<iostream>
#include<algorithm>

int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        int n;
        std::cin>>n;
        int A[n+5];
        for (int i = 0; i < n; i++)
        {
            std::cin>>A[i];
        }
        std::sort(A,A+n);
        int x = -5;
        for (int i = 0; i < n; i++)
        {
            if(A[i] >= 0 ){
                x = i;
                break;
            }
        }
        if(x == -5) std::cout <<1;
        else
        {
        
        int kt = 0;
        if(A[x]>1){
            std::cout<<1;
            kt = 1;
        }
        else
        {
        for (int i = x+1; i < n; i++)
        {
            if(A[i] - A[i-1] > 1){
                kt = 1;
                std::cout << A[i-1]+1;
                break;
            }
        }
        if(kt == 0) std::cout<<A[n-1]+1;
        }
        }
        std::cout<<std::endl;
    }
}