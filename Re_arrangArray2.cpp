#include<iostream>
 
int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        int n;
        std::cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            std::cin>>arr[i];
        }
        int j=0;
        for(int i=0;i<n;i++)
            if(arr[i] !=0)
                arr[j++]=arr[i];
 
        while (j<n)
            arr[j++] = 0;
 
        for(int i=0;i<n;i++){
            std::cout<<arr[i]<<" ";
        }
    std::cout<<std::endl;
    }
}