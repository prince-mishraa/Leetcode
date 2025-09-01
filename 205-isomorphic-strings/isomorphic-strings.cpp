class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<char,char>mps,mpt;
        for(int i = 0; i< s.size(); i++){
            char c1 = s[i] , c2 = t[i];

            if(mps.count(c1) && mps[c1] != c2) return false;
            if(mpt.count(c2) && mpt[c2] != c1) return false;

            mps[c1] = c2;
            mpt[c2] = c1;
        }
        return true;
    }
};