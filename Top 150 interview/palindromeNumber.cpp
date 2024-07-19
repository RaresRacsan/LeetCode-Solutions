class Solution {
public:
    bool isPalindrome(int x) {
        long long cpy = x, reversed = 0;
        if (x < 0)  return false;
        while (x) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        if (reversed == cpy)    return true;
        return false;
    }
};
