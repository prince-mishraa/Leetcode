class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mpp;

        for(string word : strs){
            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end());
            mpp[sortedWord].push_back(word);
        }
        vector<vector<string>> result;
        for(auto &pair :mpp){
            result.push_back(pair.second);
        }
        return result;
    }
};