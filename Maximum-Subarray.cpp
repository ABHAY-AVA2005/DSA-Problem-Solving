1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int maxSum = nums[0], currSum = nums[0];
5
6        for (int i = 1; i < nums.size(); i++) {
7            currSum = max(nums[i], currSum + nums[i]);
8            maxSum = max(maxSum, currSum);
9        }
10
11        return maxSum;
12    }
13};
14