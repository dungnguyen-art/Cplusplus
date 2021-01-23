#include<iostream>
#include<vector>

int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        int n,x;
        std::vector<int>myvector;
        std::cin>>n>>x;
        int num;
        for(int i=1;i<= n;i++){
            std::cin>>num;
            myvector.push_back(num);
        }\
        for (int i = 1; i <=n; i++)
        {
            if(myvector[i] == x){
                std::cout<<i+1<<std::endl;
                break;
            }
        }
        
    }
    
}