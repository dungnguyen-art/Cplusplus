#include<iostream>
#include<algorithm>

int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        int n;
        std::cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            std::cin>>arr[i];
        }
        int min = INT_MAX;
        int sub;
        std::sort(arr,arr+n);
        for (int i = n-1; i >= 1; i--)
        {
            sub = arr[i] - arr[i-1];
            if(sub < min)
                min =  sub;
        }
        std::cout<< min << std::endl;
    }
}