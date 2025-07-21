//better using prefix sum and hashmap(optimal for array with mixed elemenets )
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        int prefixsum = 0, maxlen = 0, len = 0;
        unordered_map<int, int> hashh;

        //calculate the prefix sum till index i: 
        for (int i = 0; i < n; i++) {
            prefixsum += arr[i];
            
            // if the sum = k, update the maxLen:
            if (prefixsum == k) {
                maxlen = max(maxlen, i + 1);
            }

            // if prefix-k exists ,then subarry with sum k exists ,
            //so we calculate the len of that subarray
            if (hashh.find(prefixsum - k) != hashh.end()) {
                len = i - hashh[prefixsum - k];
                maxlen = max(maxlen, len);
            }
            
            //inserting only if element is not found in hashh
            if (hashh.find(prefixsum) == hashh.end()) {
                hashh[prefixsum] = i;
            }
        }

        return maxlen;
    }
};




// //optimal solution if arr elements >=0
// class Solution {
//   public:
//     int longestSubarray(vector<int>& arr, int k) {
//         int n = arr.size();
//         int left = 0, right = 0; // 2 pointers
//         long long sum = arr[0];
//         int maxlen = 0;
        
//         while(right<n)
//         {
//             // if sum > k, reduce the subarray from left
//             // until sum becomes less or equal to k:
            
//             while(left<=right and sum>k)
//             {
//                 sum-=arr[left];
//                 left++;
//             }
            
//             // if sum = k, update the maxLen i.e. answer:
//             if (sum == k) {
//                 maxlen = max(maxlen, right - left + 1);
//             }
    
//             // Move forward thw right pointer:
//             right++;
//             if (right < n) sum += arr[right];
//         }

//     return maxlen;
        
        
//     }
// };









// //brute force tc o(n^2), sc o(1)
// class Solution {
//   public:
//     int longestSubarray(vector<int>& arr, int K) {
//     int n = arr.size();
//     int maxLen = 0;

//     for (int i = 0; i < n; i++) {
//         int sum = 0;

//         for (int j = i; j < n; j++) {
//             sum += arr[j];

//             if (sum == K) {
//                 maxLen = max(maxLen, j - i + 1);
//             }
//         }
//     }

//     return maxLen;
// }

// };