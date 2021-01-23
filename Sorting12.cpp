#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    int t;
    int n,m;
    std::cin>>t;
    while (t--)
    {
        std::cin >> n;
        std::cin >> m;
        std::vector<long long>myvector1;
        std::vector<long long>myvector2;
        long long x;
        for(int i=0;i< n;i++){
            std::cin >> x;
            myvector1.push_back(x);
        }
        std::sort(myvector1.begin(),myvector1.end());
        long long y;
        for (int i = 0; i < m; i++)
        {
            std::cin >> y;
            myvector2.push_back(y);
        }
        std::sort(myvector2.begin(),myvector2.end());
        long long res = 0;
        res = (myvector1[n-1]) * (myvector2[0]);
        std::cout<<res<<std::endl;
    }
    
}