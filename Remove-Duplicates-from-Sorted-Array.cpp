// optimal sol using 2ptr
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int i = 0;  // pointer for the position of unique elements
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};




/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        set<int> set;// since it only takes  holds unique elements 
        for(auto i:nums)
        {
            set.insert(i);
        }

        int j=0;
        for(auto i:set)
        {
            nums[j]=i;
            j++;
    
        }

        return set.size();
    }
};

*/



