#include<iostream>
#include<algorithm>
#include<vector>

int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        int n,m;
        std::cin>>n>>m;
        int A[n],B[m];
        std::vector<int>C(n+m);
        std::vector<int>D(n);
        std::vector<int>::iterator it;
        for (int i = 0; i < n; i++)
        {
            std::cin>>A[i];
        }
        for (int i = 0; i < m; i++)
        {
            std::cin>>B[i];
        }
        std::sort(A,A+n);
        std::sort(B,B+m);
        it = std::set_intersection(A,A+n,B,B+m,D.begin());
        D.resize(it - D.begin());
        
        it = std::set_union(A,A+n,B,B+m,C.begin());
        C.resize(it - C.begin());

        for (it  =  C.begin(); it != C.end(); it++)
        {
            std::cout<<*it<<" ";
        }
        std::cout<<std::endl;
        
        for ( it = D.begin(); it != D.end(); it++)
        {
            std::cout<<*it<<" ";
        }
        std::cout<<std::endl;
    }
    
}