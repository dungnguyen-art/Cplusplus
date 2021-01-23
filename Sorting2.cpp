#include<iostream>
#include<map>
using namespace std; 

void rearrange(int arr[], int n, int x) 
{ 
    multimap<int, int> m;
    multimap<int ,int >:: iterator it;  
    for (int i = 0 ; i < n; i++) 
        m.insert(make_pair(abs(x-arr[i]),arr[i])); 
    int i = 0; 
    for (it = m.begin(); it != m.end(); it++) 
        arr[i++] = (*it).second ; 
}
void printArray(int arr[] , int n) 
{ 
    for (int i = 0 ; i < n; i++) 
        cout << arr[i] << " ";
} 
int main() 
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,X;
        cin>>n>>X;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        rearrange(arr, n, X); 
        printArray(arr, n); 
        cout<<endl;
    }
    return 0;
}