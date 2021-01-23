#include<iostream>
#include<algorithm>
#include<vector>

int main(){
    int t;
    std:: cin >> t;
    while (t--){  
    std::vector<int>myvector;
    int n;
    std::cin >> n;
    int x;
    for(int i=0;i< n;i++){
        std::cin >> x;
        myvector.push_back(x);
    }
    std::sort (myvector.begin(),myvector.end());
    int j;
    if( n & 1){
        for(int i = 0;i<n/2;i++){
           std:: cout << myvector[n-1-i] <<" "<<myvector[i] <<" ";
        }
       std:: cout << myvector[n/2];
    }
    else
    {
        for(int i=0;i<n/2;i++){
           std::cout << myvector[n-1-i]<<" "<<myvector[i]<<" ";
        }
     }
    std::cout << std::endl;
    }
}