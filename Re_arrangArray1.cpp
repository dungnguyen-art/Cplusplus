#include<iostream>

int main(){
    int t;
    std::cin >> t;
    int n;
    while (t--)
    {
        std::cin>>n;
        double arr[n],brr[n];
        for(int i=0;i<n;i++){
            std::cin>>arr[i];
            brr[i]=-1;
        }
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(arr[j]==i){
                    brr[i] = i;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            std::cout<<brr[i]<<" ";
        }
    std::cout<<std::endl;
    }
}