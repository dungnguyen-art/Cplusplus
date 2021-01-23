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
        int res = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            std::cin>>arr[i];
        }
        
        for (int i = 1; i < n; i++)
        {
            for (int j = i-1; j>=0; j--)
            {
                sum = arr[i]-arr[j];
                if(sum > res)
                    res = sum;
            }
        }
        if(res == 0) std::cout<<-1<<std::endl;
        else std::cout<<res<<std::endl;
        
    }
    
}