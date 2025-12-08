1class Solution {
2public:
3    int maximumWealth(vector<vector<int>>& accounts) {
4        int max=0;
5        for(auto &row :accounts)
6        {
7            int sum=0;
8            for( auto col:row)
9            {
10                sum+=col;
11            }
12            if(sum>max) max=sum;
13
14        }
15        return max;
16    }
17};