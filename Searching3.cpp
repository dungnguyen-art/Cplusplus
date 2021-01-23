#include<iostream>
#include<vector>

int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        int n;
        std::vector<int>myvector;
        std::cin>>n;
        int num;
        for(int i=1;i<n;i++){
            std::cin>>num;
            myvector.push_back(num);
        }
        for (int i = 1; i < n; i++)
        {
            if(myvector[i]-myvector[i-1]>1){
                std::cout<<(myvector[i]+myvector[i-1])/2<<std::endl;
            }
        }
        
    }
}