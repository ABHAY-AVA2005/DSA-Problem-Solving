1class Solution {
2public:
3    vector<int> runningSum(vector<int>& nums) {
4        int sums = 0;
5        
6        for (int i = 0; i < nums.size(); i++) {
7            sums += nums[i];
8            nums[i] = sums;
9        }
10        
11        return nums;
12    }
13};