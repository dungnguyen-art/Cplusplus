#include<iostream>
#include<algorithm>
#include<vector>

int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        int N1,N2,N3;
        std::cin>>N1>>N2>>N3;
        std::vector<double>::iterator it;
        std::vector<double>D(N1);
        std::vector<double>res(N1);
        double A[N1],B[N2],C[N3];
        for (int i = 0; i < N1; i++)
        {
            std::cin>>A[i];
        }
        for (int i = 0; i < N2; i++)
        {
            std::cin>>B[i];
        }
        for (int i = 0; i < N3; i++)
        {
            std::cin>>C[i];
        }
        it = std::set_intersection(A,A+N1,B,B+N2,D.begin());

        D.resize(it - D.begin());

        it = std::set_intersection(D.begin(),D.end(),C,C+N3,res.begin());

        res.resize(it - res.begin());

        for (it = res.begin(); it != res.end(); it++)
        {
            std::cout<<*it<<" ";
        }
        
        if(res.empty())
            std::cout<<-1;
        std::cout<<std::endl;
    }
    return 0;
}