#include <bits/stdc++.h>
using namespace std;
long long getSmallestDivNum(long long n);
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << getSmallestDivNum(n) << endl;
    }
    return 0;
}
int HCF(long long a, long long b)
{
    if (a == 0)
    {
        return b;
    }

    return HCF(b % a, a);
}

long long LCM(long long a, long long  b)
{
    return (a * b) / HCF(a, b);
}
long long getSmallestDivNum(long long n)
{
    long long out = n;

    for (int i = n - 1; i >= 2; i--)
    {
        out = LCM(i, out);
    }
    return out;
}