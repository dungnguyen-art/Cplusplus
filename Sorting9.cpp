#include<iostream>
#include<vector>

int main(){
    int n;
    int t,h;
    std::cin >> t;
    while(t--)
    {
        std::vector<int>myvector;
        std::cin >> n;
        std::cin >> h;
        int x;
        int count = 0;
        for(int i=0;i<n;i++){
            std::cin >> x;
            myvector.push_back(x);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(myvector[i] + myvector[j] == h)
                    count ++;
            }
        }
        std::cout<<count <<std::endl;
    }
    
}