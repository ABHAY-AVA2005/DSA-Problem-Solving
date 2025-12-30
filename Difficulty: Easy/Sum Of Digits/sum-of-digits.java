class Solution {
    public int sumOfDigits(int n) {
        int sum = 0;
        
        // Handle negative numbers (convert -123 to 123)
        // so we get a positive sum (1+2+3 = 6)
        n = Math.abs(n);
        
        // Loop runs until n becomes 0
        while (n > 0) {
            // 1. Get the last digit
            int lastDigit = n % 10;
            
            // 2. Add it to sum
            sum = sum + lastDigit;
            
            // 3. Remove the last digit
            n = n / 10;
        }
        
        return sum;
    }
}