// User function Template for Java

class Solution {
    public int reverseDigits(int n) {
        // Code here
        int temp=n,rev=0, rem;
            while(temp>0) {
                rem=temp%10;
                rev=rev*10+rem;
                temp=temp/10;
            }
            return rev;

    }
}