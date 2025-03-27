class Solution {
public:
    bool isPalindrome(string s) {
        string alpha;
        string alpharev;
        for(char c : s){
           if(isalnum(c)){
            alpha+= tolower(c);
           }
        }
        for(int i = s.size()-1 ; i>=0;i--){
            if(isalnum(s[i])){
            alpharev+=tolower(s[i]);
           }
        }
        return alpha == alpharev;
    }
};