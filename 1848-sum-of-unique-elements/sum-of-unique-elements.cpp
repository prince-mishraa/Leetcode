class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int freq[101] = {0};
        int n = nums.size();
        int sum = 0;

        for(int i = 0;i < n; ++i) ++freq[nums[i]];
        for(int i = 0;i<n; ++i){
            if(freq[nums[i]] == 1) sum += nums[i];
        }
        return sum;
    }
};