// optimal
class Solution {
public:
    bool check(vector<int>& nums) {

        int n=nums.size();
        int count =0;
        

        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]) count ++;
        }

    return count<=1;;
    }
};






//brute force
// class Solution {
// public:
//     bool check(vector<int>& nums) {

//         int n=nums.size();
//         vector<int> v1(nums);
        
//         if (is_sorted(nums.begin(),nums.end())) return true;

//         for(auto j:nums){
//             int temp=nums[0];
//             for(int i=0;i<n-1;i++)
//             {
//                 nums[i]=nums[i+1];
//             }
//             nums[n-1]=temp;
//             if(is_sorted(nums.begin(),nums.end())) return true;
//         }

//     return false;
//     }
// };