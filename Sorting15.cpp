#include<bits/stdc++.h>
#define MAX 100000
int countPairsWithDiffK(int arr[], int n, int k)
{
    int count = 0;  // Initialize count
 
    // Initialize empty hashmap.
    bool hashmap[MAX] = {false};
 
    // Insert array elements to hashmap
    for (int i = 0; i < n; i++)
        hashmap[arr[i]] = true;
 
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        if (x - k >= 0 && hashmap[x - k])
            count++;
        if (x + k < MAX && hashmap[x + k])
            count++;
        hashmap[x] = false;
    }
    return count;
}
int main(){
    int t;
    std::cin>>t;
    while (t--)
    {
        int n,k;
        std::cin>>n>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            std::cin>>arr[i];
        }
        std::cout <<countPairsWithDiffK(arr,n,k);
    }
    
}