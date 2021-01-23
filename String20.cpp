#include <bits/stdc++.h>
using namespace std;
void reverseWords(string& s)
{

    int start = 0;
    for (int end = 0; end < s.length(); end++) {
        if (s[end] == ' ') {
            reverse(s.begin() + start, s.begin() + end);
            start = end + 1;
        }
    }
    reverse(s.begin() + start, s.end());
    reverse(s.begin(), s.end());
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
    string s ;
    s.clear();
    getline(cin,s);
    reverseWords(s);
    cout << s<<endl;
    }
    return 0;
}