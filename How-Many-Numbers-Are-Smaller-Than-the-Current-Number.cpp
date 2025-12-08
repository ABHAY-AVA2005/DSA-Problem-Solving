1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        vector<int> res(nums.size(),0);
5        for(int i=0;i<nums.size();i++)
6        {
7
8            for(int j=0 ;j<nums.size();j++)
9            {
10                if (i==j) continue;
11                if(nums[j]<nums[i] && j!=i)
12                {
13                    res[i]++;
14                }
15
16            }
17            
18        }
19        return res;
20    }
21};