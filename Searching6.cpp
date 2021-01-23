#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<limits.h>

using namespace std; 

bool compare(int x, int y) 
{ 
    return abs(x) < abs(y); 
} 
int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long arr[10000];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        stable_sort(arr, arr + n, compare); 
        long  long min = INT_MAX;
        int x, y; 
        for (int i = 1; i < n; i++) {
            if (abs(arr[i - 1] + arr[i]) < min) {  
                min = abs(arr[i - 1] + arr[i]); 
                x = i - 1;
                y = i; 
            } 
        } 
        cout << arr[x] + arr[y] <<endl; 
    }
}