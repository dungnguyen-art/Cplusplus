#include<iostream>

int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        int n;
        std::cin>>n;
        long arr[n], b[n];
        for (int i = 0; i < n; i++)
        {
            std::cin>>arr[i];
        }
        b[0] = arr[0]*arr[1];
        b[n-1] = arr[n-1]*arr[n-2];
        for (int i = 1; i < n-1; i++)
        {
            b[i] = arr[i-1]*arr[i+1];
        }
        for (int i = 0; i < n; i++)
        {
            std::cout<<b[i]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}