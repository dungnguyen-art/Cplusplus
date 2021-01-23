#include<iostream>
#include<algorithm>

int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
    int k,n;
    std::cin>>k>>n;
    int arr[k*n];
    int x;
    for (int i = 0; i < k*n; i++)
    {
            std::cin>>arr[i];
    }
    std::sort(arr,arr+k*n);
    for (int i = 0; i < k*n; i++)
    {
        std::cout<<arr[i]<<' ';
    }
    std::cout<<std::endl;
    }
}