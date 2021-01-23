#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    int t;
    std::cin >> t;
    int n;
    std::vector<int>myvector;

    while (t--)
    {
        
        std::cin >> n;
        int x;
        for (int i = 0; i < n; i++)
        {
            int x;
            std::cin >> x;
            myvector.push_back(x);
        }
        std::stable_sort(myvector.begin(),myvector.end());
        for (int i = 0; i < n; i++)
        {
            std::cout<<myvector[i] <<" ";
        }
        std::cout << std::endl;
        myvector.clear();
    }
 
}