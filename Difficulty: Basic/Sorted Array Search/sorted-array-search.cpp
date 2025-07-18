
class Solution {
public:
    bool searchInSorted(std::vector<int>& arr, int k) { // Changed 'nums' to 'arr' for consistency
        int n = arr.size(); // Corrected to use 'arr' instead of 'nums'
        int low = 0; // Initialize low pointer to the first index
        int high = n - 1; // Initialize high pointer to the last index

        // Continue searching as long as the low pointer doesn't cross the high pointer
        while (low <= high) {
            int mid = low + (high - low) / 2; // Calculate the middle index (prevents overflow)

            if (arr[mid] == k) {
                return true; // Element found
            } else if (arr[mid] < k) {
                low = mid + 1; // Target is in the right half, update low
            } else { // arr[mid] > k
                high = mid - 1; // Target is in the left half, update high
            }
        }

        return false; // Element not found
    }
};
