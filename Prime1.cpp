#include<iostream>
#include<math.h>
using namespace std;

void solution(unsigned long long int N){
    while(N%2==0){
        N=N/2;
        cout<<2<<" ";
    }
    for(long long i=3; i<=sqrt(N); i=i+2){
        while(N%i==0){
            N=N/i;
            cout<<i<<" ";
        }
    }
    if(N>2)
    cout<<N;
}

int main(){
    unsigned long long int N;
    int T;
    cin>>T;
    while(T--){
        cin>>N;
        solution(N);
        cout<<endl;
    }
    return 0;
}