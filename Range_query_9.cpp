#include <bits/stdc++.h>

#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i < n; i++)
#define MOD 1000000007
using namespace std;
int main()
{
    int t, i, j, n, m, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        f(i, n) cin >> a[i];
        int op = 0, c = 0;
        while (1)
        {
            f(i, n)
            {
                if (a[i] != -1)
                {
                    if (a[i] % 2)
                        op++;
                    a[i] /= 2;
                    if (a[i] == 0)
                    {
                        c++;
                        a[i] = -1;
                    }
                }
            }
            // f(i,n)  cout<<a[i]<<" ";    cout<<endl;
            if (c == n)
                break;
            op++;
        }
        cout << op << endl;
    }
    return 0;
}