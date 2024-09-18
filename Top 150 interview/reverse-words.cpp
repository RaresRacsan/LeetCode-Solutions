class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        vector<string> res;
        int n = s.size(), i = 0;
        while (i < n) {
            if (s[i] != ' ')
                word += s[i];
            else {
                if (word != "") {
                    res.push_back(word);
                    word = "";
                }
            }
            i++;
        }
        if (word != "") {
            res.push_back(word);
        }
        string finalResult = "";
        n = res.size();
        for (int i = n - 1; i >= 0; i--) {
            finalResult += res[i];
            if (i != 0)
                finalResult += " ";
        }
        return finalResult;
    }
};
