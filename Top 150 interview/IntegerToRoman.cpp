#include <string>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        // List of Roman numerals and their integer values
        pair<int, string> romanSymbols[] = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };

        string result = "";
        
        // Traverse the list and construct the Roman numeral
        for (int i = 0; i < 13; i++) {
            while (num >= romanSymbols[i].first) {
                num -= romanSymbols[i].first;
                result += romanSymbols[i].second;
            }
        }
        
        return result;
    }
};
