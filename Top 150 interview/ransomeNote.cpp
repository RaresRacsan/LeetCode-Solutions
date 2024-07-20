class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int vectorOfLetters[30] = {0};
        int s = magazine.size();
        for (int i = 0; i < s; i++) {
            vectorOfLetters[magazine[i] - 'a']++;
        }
        int z = ransomNote.size();
        for (int i = 0; i < z; i++) {
            if (vectorOfLetters[ransomNote[i] - 'a'] == 0)
                return false;
            else
                vectorOfLetters[ransomNote[i] - 'a']--;
        }
        return true;
    }
};
