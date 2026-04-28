class Solution {
  public:
    int closestNumber(int n, int m) {
        // code here
        int diff=0;
        
        while(true)
        {
            int m1=n+diff;
            int m2=n-diff;
            if(m1%m==0 and m2%m==0)  return abs(m1)>abs(m2)?m1:m2;
            if(m1%m==0) return m1;
            else if(m2%m==0) return m2;
            else diff++;
        }
    }
};