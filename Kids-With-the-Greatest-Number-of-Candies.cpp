1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
4        int max=candies[0];
5        int const  n=candies.size();
6        vector<bool> arr(n);
7        for(auto ele:candies)
8        {
9            if(ele>max) max=ele;
10        }
11
12         for(int i=0;i<candies.size();i++)
13         {
14            if((candies[i]+extraCandies)>=max) 
15            {
16                arr[i]=true;
17            }
18            else arr[i]=false;
19         }
20         return arr;
21    }
22};