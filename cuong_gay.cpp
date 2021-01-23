#include<bits/stdc++.h>

using namespace std;

string chuyen_5_6(string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '5')
        {
            s[i] = '6';
        }
    }
    return s;
}

string chuyen_6_5(string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '6')
        {
            s[i] = '5';
        }
    }
    return s;
}

string tong(string x, string y)
{
    if(x.length() < y.length())
    {
        swap(x, y);
    }
    string s = "";
    int n1 = x.length();
    int n2 = y.length();
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    int tmp = 0;
    for(int i = 0; i < n2; i++)
    {
        int sum = ((x[i] - '0') + (y[i] - '0')) + tmp;
        s.push_back(sum%10 + '0');
        tmp = sum/10;
    }
    for(int i = n2; i < n1; i++)
    {
        int sum = (x[i] - '0') + tmp;
        s.push_back(sum%10 + '0');
        tmp = sum/10;
    }
    if(tmp)
    {
        s.push_back(tmp + '0');
    }
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s, str;
        cin >> s;
        cin >> str;
        cout << tong(chuyen_6_5(s), chuyen_6_5(str)) << " ";
        cout << tong(chuyen_5_6(s), chuyen_5_6(str)) << endl;
        s.clear();
        str.clear();
    }
    return 0;
}