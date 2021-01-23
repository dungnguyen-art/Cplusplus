#include <iostream>
#include <string>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        std::string a, b;
        std::cin >> a >> b;
        while (a.size() != b.size())
        {
            if (a.size() > b.size())
                b = "0" + b;
            else
                a = "0" + a;
        }
        //std::cout << a << " " << b << std::endl;
        std::string res ="";
        int borrow = 0;
        for(int i=a.size()-1;i>=0;i--){
            int tmp = a[i]-'0'+b[i]-'0'+ borrow;
            borrow = tmp / 10;
            std::string s = std::to_string(tmp % 10);
            res = s + res;
        }
        ///std::cout<<borrow<<std::endl;
        if(borrow == 1)
            res = "1" + res;
        std::cout<<res<<std::endl;
    }
}