1#include <vector>
2#include <numeric> // For accumulate
3using namespace std;
4
5class Solution {
6public:
7    int pivotIndex(vector<int>& nums) {
8        int totalSum = 0;
9        int leftSum = 0;
10        
11        // Step 1: Calculate total sum
12        for (int x : nums) totalSum += x;
13        
14        // Step 2: Iterate and compare
15        for (int i = 0; i < nums.size(); i++) {
16            // Right Sum is (totalSum - leftSum - nums[i])
17            if (leftSum == totalSum - leftSum - nums[i]) {
18                return i; // Found the balanced index
19            }
20            leftSum += nums[i]; // Update leftSum for the next index
21        }
22        
23        return -1; // No balanced index found
24    }
25};