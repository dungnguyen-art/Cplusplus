#include <bits/stdc++.h> 
using namespace std; 
  
int gcd(long long x,long long y){
    if(x==0)
        return y;
    return gcd(y%x,x);
}
long long LCM(long long x, long long y, long long z) 
{ 
    long long ans = ((x * y) / (gcd(x, y))); 
    return ((z * ans) / (gcd(ans, z))); 
} 
long long findDivisible(long long n, long long x, long long y, long long z) 
{
    long long lcm = LCM(x,y,z);
    long long ndigitnumber = pow(10, n-1);
    long long reminder = ndigitnumber % lcm; 
    if (reminder == 0)
         return ndigitnumber; 
    ndigitnumber += lcm - reminder;  
    if (ndigitnumber < pow(10, n)) 
        return ndigitnumber; 
    else
        return 0; 
} 
int main() 
{ 
    int t;
    cin >> t;
    while (t--)
    {
    long long x,y,z,n;
    cin >> x >> y >> z >> n;
    long long res = findDivisible(n, x, y, z); 
    if (res != 0) 
        cout << res<<endl;
    else
        cout << -1<<endl;
    }
    return 0; 
} 