// optimal approach 
class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n;

        // Step 1: Reverse last k elements
        for (int i = 0; i < k / 2; ++i) {
            int temp = arr[n - k + i];
            arr[n - k + i] = arr[n - 1 - i];
            arr[n - 1 - i] = temp;
        }

        // Step 2: Reverse first n - k elements
        for (int i = 0; i < (n - k) / 2; ++i) {
            int temp = arr[i];
            arr[i] = arr[n - k - 1 - i];
            arr[n - k - 1 - i] = temp;
        }

        // Step 3: Reverse whole array
        for (int i = 0; i < n / 2; ++i) {
            int temp = arr[i];
            arr[i] = arr[n - 1 - i];
            arr[n - 1 - i] = temp;
        }
    }
};
