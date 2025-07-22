// optimal using hash map t.c=O(N),S.C=O
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashh;

        // First loop: store all values with their indices
        for (int i = 0; i < nums.size(); i++) {
            hashh[nums[i]] = i;
        }

        // Second loop: check for complement
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // Check if complement exists and is not the same index
            if (hashh.find(complement) != hashh.end() && hashh[complement] != i) {
                return {i, hashh[complement]};
            }
        }

        return {};
    }
};
