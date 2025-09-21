class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> count;
        
        for(int i = 0; i < nums.size(); i++){
            count[nums[i]]++;
        }
        int maxi = 0;
        int ans = 0;

        for(auto i : count){
            if(i.second > maxi){
                maxi = i.second;
            }
        }

        for(auto i : count){
            if(i.second == maxi){
                ans += i.second;
            }
        }
        return ans;
    }
};