class Solution {
public:
    int reverse(int x) {
        long long rev = 0;  // use long long to avoid overflow

        while (x != 0) {
            int digit = x % 10;     // works for negatives too
            rev = rev * 10 + digit;
            x /= 10;
        }

        // check for overflow (must fit in 32-bit signed int)
        if (rev > INT_MAX || rev < INT_MIN) return 0;

        return (int)rev;
    }
};
