#include<iostream>
#include<climits>

int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
    int n,m;
    std::cin>>n>>m;
    int A[n],B[m];
    for (int i = 0; i < n; i++)
    {
        std::cin>>A[i];
    }
    long long res = 0;
    int min = INT_MAX;
    for (int i = 0; i < m; i++)
    {
        std::cin>>B[i];
        if(i<m-1)
            res += B[i];
    }
   // std::cout<<res<<" ";
    for (int i = 0; i < n; i++)
    {
        if (A[i]>B[m-1])
        {
            res += A[i];
        }
        
    }
    std::cout<<res<<std::endl;
    }
}