class Solution {
public:
    int trailingZeroes(int n) {
        int five = 5, solution = 0;
        while (n / five) {
            solution += n / five;
            five *= 5;
        }
        return solution;
    }
};
