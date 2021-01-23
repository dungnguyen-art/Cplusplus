#include<iostream>
#include<algorithm>

bool isSplittable(long long n, long long m)
{

    long long total_sum = (n * (n + 1)) / 2;
    long long sum_s1 = (total_sum + m) / 2;
    long long sum_s2 = total_sum - sum_s1;
    if (total_sum < m)
        return false;

    if (sum_s1 + sum_s2 == total_sum &&
        sum_s1 - sum_s2 == m)
        return (std::__gcd(sum_s1,sum_s2)==1);

        return false;
    
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        long long n, m;
        std::cin >> n >> m;
        if (isSplittable(n, m))
            std::cout << "Yes" << std::endl;
        else
            std::cout << "No" << std::endl;
    }
    return 0;
}