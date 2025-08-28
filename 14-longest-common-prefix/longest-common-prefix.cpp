class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(), strs.end());
        string count = "";

        for(int i = 0; i < min(strs[0].size(), strs[n-1].size()); i++){
            if(strs[0][i] != strs[n-1][i]){
                break;
            }
            count += strs[0][i];
        }
        return count;

    }
};