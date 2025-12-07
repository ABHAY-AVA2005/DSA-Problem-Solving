1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> ans(2 * n);
6
7        for (int i = 0; i < n; i++) {
8            ans[i] = nums[i];
9            ans[i + n] = nums[i];
10        }
11
12        return ans;
13    }
14};