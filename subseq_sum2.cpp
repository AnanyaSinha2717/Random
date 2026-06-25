#include <bits/stdc++.h>

class Solution
{
private:
    bool checkSum(std::vector<int> &nums, int sum, int i)
    {
        if (i == nums.size())
            return sum == 0;

        return checkSum(nums, sum, i + 1) + checkSum(nums, sum - nums[i], i + 1);
    }

public:
    bool checkSub(std::vector<int> &v, int sum)
    {
        return checkSum(v, sum, 0);
    }
};

int main()
{
    Solution sol;
    std::vector<int> v = {1, 2, 3, 4, 5};
    int sum = 100;
    std::cout << sum << " exists: " << sol.checkSub(v, sum) << std::endl;
    return 0;
}