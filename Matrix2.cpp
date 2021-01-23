#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, dem = 0;
        long x, max = 0;
        cin >> n;
        int A[100001] = { 0 };
        for (int i = 0; i < n; i++) {
            int B[100001] = { 0 };
            for (int j = 0; j < n; j++) {
                cin >> x;
                if (x > max)
                    max = x;
                B[x]++;
            }
            for (long j = 0; j < 100001; j++) {
                if (B[j])
                    A[j]++;
            }
        }
        for (long i = 0; i <= max; i++) {
            if (A[i] == n)
                dem++;
        }
        cout << dem << endl;
    }
}