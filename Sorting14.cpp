#include<iostream>
#include<algorithm>
#include<vector>
#include<set>

int main(){
    int t;
    int n,res;
    std::cin>>t;
    std::vector<int>myvector;
    while (t--)
    {
        std::cin>>n;
        int x;
        for(int i=0;i<n;i++){
            std::cin>>x;
            myvector.push_back(x);
        }
        std::sort(myvector.begin(),myvector.end());
        int L = myvector[n-1];
        int R = myvector[0];
        std::set<int> s(myvector.begin(),myvector.end());
        res = (L - R + 1) - s.size();
        std::cout<<res<<" ";
        myvector.clear();
        s.clear();
        std::cout<<std::endl;
    }
}