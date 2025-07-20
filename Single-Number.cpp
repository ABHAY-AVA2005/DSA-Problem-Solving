class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor1=0;
        for(auto x: nums)
        {
            xor1^=x;
        }
        return xor1;
    }
};