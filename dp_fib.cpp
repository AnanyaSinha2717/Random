#include <bits/stdc++.h>

// memoization/recursion
// class Solution
// {
// public:
//     int fib(int n, std::vector<int> dp)
//     {
//         if (n <= 1)
//             return n;

//         if (dp[n] != -1)
//             return dp[n];

//         dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
//         return dp[n];
//     }
// };

int main()
{
    int n;
    std::cin >> n;
    /// tabulation with constant space
    int prev = 1, prev2 = 0, curr = 0;
    for (int i = 2; i <= n; i++)
    {
        curr = prev + prev2;
        prev2 = prev;
        prev = curr;
    }
    std::cout << prev << std::endl;
    return 0;
}