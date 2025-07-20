class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=INT_MIN,flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
            {
                flag++;
            }
            else flag=0;
            if (flag>max) max=flag;
        }

        return max;
    }
};