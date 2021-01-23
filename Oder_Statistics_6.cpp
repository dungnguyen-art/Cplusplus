#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        int n;
        std::cin>>n;
        std::vector<long long> myvector;
        
        for(int i=0;i<n;i++){
            long long x;
            std::cin>>x;
            myvector.push_back(x);
        }

        std::vector<long long> dp(myvector.begin(),myvector.end());
        
        for(int i=0;i<n;i++)
            std::cout<<dp[i]<<" ";

        std::cout<<std::endl;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(myvector[i]>myvector[j] && dp[i]<dp[j]+myvector[i]){
                    
                    dp[i] = dp[j]+myvector[i];
                }
            }
            std::cout << dp[i]<<" ";
        }
        std::cout<< *std::max_element(dp.begin(),dp.end())<<std::endl;
        myvector.clear();
        dp.clear();
    }
    
}