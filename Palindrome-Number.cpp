class Solution {
public:
    bool isPalindrome(int x) {
        int revhalf=0;
        if(x<0 || x%10==0 and x!=0) return false;

        while(x>revhalf)
        {
            revhalf=revhalf*10+x%10;
            x/=10;
        }

        return (x==revhalf||x==revhalf/10);
    }
};