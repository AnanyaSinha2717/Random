#include <bits/stdc++.h>

class Solution
{
public:
    int fib(int n, std::vector<int> dp)
    {
        if (n <= 1)
            return n;

        if (dp[n] != -1)
            return dp[n];

        dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
        return dp[n];
    }
};

int main()
{
    int n = 10;
    std::vector<int> dp(n + 1, -1);
    Solution sol;
    std::cout << sol.fib(n, dp) << std::endl;
    return 0;
}