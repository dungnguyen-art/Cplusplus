#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        int n,k;
        std::cin>>n>>k;
        std::vector<int>myvector;
        int num;
        for (int i = 0; i < n; i++)
        {
            std::cin>>num;
            myvector.push_back(num);
        }
        std::sort(myvector.begin(),myvector.end());
        for(int i=n-1;i>n-1-k;i--){
            std::cout<<myvector[i]<<" ";
        }
        std::cout<<std::endl;
    }
}