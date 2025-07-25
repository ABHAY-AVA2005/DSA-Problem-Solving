class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pividx = partition(arr, low, high);
            quickSort(arr, low, pividx - 1);
            quickSort(arr, pividx + 1, high);
        }
    }

    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[high];
        int idx = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                idx++;
                swap(arr[idx], arr[j]);  // swap correctly
            }
        }

        idx++;
        swap(arr[idx], arr[high]);      // put pivot in correct position
        return idx;                     // return pivot index
    }
};
