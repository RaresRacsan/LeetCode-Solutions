class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size(), column = 0, row = 0, x = 0;
        char ma[1000][1000] = {};
        for (int i = 0; i < n; i++) {
            if (row % numRows == 0)
                x = 1;
            else if (row == numRows - 1)
                x = -1;

            ma[row][column] = s[i];

            if (x == -1)
                column++;
            row += x;
        }
        s = "";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (ma[i][j])
                    s += ma[i][j];
            }
        }
        return s;
    }
};
