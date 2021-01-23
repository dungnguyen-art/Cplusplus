#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin >> t;
    while (t--)
    {
        vector<int> counts(26);
        string s; cin >> s;
        int maxCount = 0;
        for (char c : s)
            maxCount = max(maxCount, ++counts[c - 'a']);
        if ((s.size() - maxCount) >= maxCount - 1)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
	return 0;
}