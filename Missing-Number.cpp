// optimal  using sum of natural no:   
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = n * (n + 1) / 2;
        
        int sum = 0;
        for (int num : nums)
            sum += num;

        return total - sum;
    }
};




// // brute force t.c and s.c O(n)
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         unordered_map<int, int> hashh;

//         for (auto x : nums) {
//             hashh[x]++;
//         }

//         for (int i = 0; i <= nums.size(); i++) {
//             if (hashh.count(i) == 0)
//                 return i;
//         }

//         return -1;  // <--- FIXED: ensures all paths return an int
//     }
// };
