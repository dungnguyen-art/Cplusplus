#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
#define MOD 1000000007
#define endl "\n"

void solve(){
    int n,k,m=INT_MIN;//m=max
    cin>>n>>k;
    int a[100001]={};
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>m) m=x;
        a[x]++;
    }
    for(int i=0;i<=m-k;i++){
        if(a[i]&&a[i+k]){
            cout<<1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}