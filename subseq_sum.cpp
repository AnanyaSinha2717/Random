#include <bits/stdc++.h>

class Solution
{
private:
    int sumup(std::vector<int> &nums, int i, int sum)
    {
        if (sum == 0)
            return 1;
        if (sum < 0 || i == nums.size())
            return 0;

        return sumup(nums, i + 1, sum) + sumup(nums, i + 1, sum - nums[i]);
    }

public:
    int countSubseqWithSum(std::vector<int> &nums, int target)
    {
        return sumup(nums, 0, target);
    }
};

int main()
{
    Solution sol;
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 5;
    std::cout << sol.countSubseqWithSum(nums, target) << std::endl;
    return 0;
}