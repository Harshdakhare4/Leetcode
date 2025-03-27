class Solution {
public:
    int longestPalindrome(string s) {
        if (s.size() == 1) return 1;
        unordered_map<char, int> numchar;
        for (char c : s) {
            numchar[c]++;
        }
        int count = 0, odd = 0;
        for (auto &pair : numchar) {
            if (pair.second % 2 == 0) {
                count += pair.second;
            } else {
                count += pair.second - 1;
                odd = 1;
            }
        }
        return count + odd;
    }
};