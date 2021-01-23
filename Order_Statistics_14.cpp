#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        std::vector<int> myvector, myvector1;
        int n;
        std::cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            std::cin >> x;
            myvector.push_back(x);
            myvector1.push_back(x);
        }

        sort(myvector1.begin(), myvector1.end());

        for (int i = 0; i < n; i++)
        {
            auto it = upper_bound(myvector1.begin(),myvector1.end(),myvector[i]);
            if(it!=myvector1.end())
                std::cout<<*it<<" ";
            else
                std::cout<<"_"<<" ";  
        }
        std::cout << std::endl;
    }
    return 0;
}