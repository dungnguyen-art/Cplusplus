#include <bits/stdc++.h> 
using namespace std; 
long long mulmod(long long a,long long  b,long long c) { 
    if (a == 0 || b == 0) 
        return 0; 
    if (a == 1) 
        return b; 
    if (b == 1) 
        return a; 
    long long a2 = mulmod(a, b / 2, c); 
    if ((b & 1) == 0)  
    { 
        return (a2 + a2) % c; 
    }  
    else  
    { 
        return ((a % c) + (a2 + a2)) % c; 
    } 
} 
int main() {
    int t;
    cin >> t;
    while (t--)
    {
    long long a,b,c; 
    cin>>a>>b>>c; 
    cout << mulmod(a,b,c) <<endl; 
    }
    return 0; 
} 