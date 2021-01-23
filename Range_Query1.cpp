#include<iostream>

int main(){
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, Q,L,R;
        std::cin >> n >> Q;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            std::cin >> A[i];
        }
        int sum;
        for (int i = 0; i < Q; i++)
        {
            std::cin>>L>>R;
            int j = L;
            sum = 0;
            while (j<=R)
            {
                sum += A[j-1];
                j++;
            }
            std::cout<<sum<<std::endl;
        }
        std::cout<<std::endl;
    }
    
}