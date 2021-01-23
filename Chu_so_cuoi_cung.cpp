#include<iostream>


int tinh(int n){
    int sum ;
    if(n < 10) return n;
    while (n<0)
    {
        sum += n % 10;
        n /= 10;
    }
    return tinh(sum);
}
int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        int n;
        std::cin>>n;
        std::cout<<tinh(n)<<std::endl; 
    }
}