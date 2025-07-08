class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        int charcount[26] = {0};
        for(int i = 0;i < s.length();i++){
            charcount[s[i] - 'a']++;
            charcount[t[i] - 'a']--;
        }
        
        for(int i = 0;i < 26;i++){
            if(charcount[i] != 0) return false;
        }
        return true;
    }
};