class Solution {
    public int countDigits(int n) {
        // code here
        if (n==0) return 1;
        int count=(int)Math.log10(n)+1;
        return count;
    }
}
