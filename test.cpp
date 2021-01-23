/* C++ program to count minimum number of operations

to get the given target array */

#include <bits/stdc++.h>

using namespace std;

// Returns count of minimum operations to covert a

// zero array to target array with increment and

// doubling operations.

// This function computes count by doing reverse

// steps, i.e., convert target to zero array.

int countMinOperations(unsigned int tar[], int n)

{

    int mn = *min_element(tar, tar + n), mns = 0, op = 0;

    if (mn)

    {

        int logv = (int)log2(mn);

        mns = 1 << logv;

        op = logv + n;
    }

    for (int i = 0; i < n; i++)

        op += (tar[i] - mns);

    return op;
}

/* Driver program to test above functions*/

int main()

{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        unsigned int arr[n + 5];

        for (int i = 0; i < n; i++)
            std::cin >> arr[i];

        cout << countMinOperations(arr, n);

        return 0;
    }
}