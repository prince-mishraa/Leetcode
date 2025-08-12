class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int s = 1, e = *max_element(nums.begin(), nums.end());
        while(s < e){
            int m = (s + e) / 2;
            int sum = 0;
            for(int i = 0; i < nums.size(); ++i){
                sum += (nums[i] + m - 1) / m;
            }
            if(sum <= threshold) {
                e = m;
            } else{
                s = m + 1;
            }
        }
        return s;
    }
};