class Solution {
  public:
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        int mid=l +(r-l)/2;
        
        if(l<r){
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
     }
        
}
    
      void merge(vector<int>& arr, int l, int mid,int r) {
        // code here
        vector<int> merge;
        int i=l,j=mid+1;
        
        while(i<=mid and j<=r)
        {
            if(arr[i]<arr[j]) 
            {
                merge.emplace_back(arr[i]);
                i++;
            }
            else {
                merge.emplace_back(arr[j]);
                j++;
            }
        }
        
        while(i<=mid){
            merge.emplace_back(arr[i]);
            i++;
        }
        
        while(j<=r){
            merge.emplace_back(arr[j]);
            j++;
        }
        
        for (int k = 0; k < merge.size(); k++)
        {
            arr[l + k] = merge[k];
        }

     
    }
};  

