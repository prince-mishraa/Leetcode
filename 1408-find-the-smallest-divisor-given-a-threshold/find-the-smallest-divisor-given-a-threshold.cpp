class Solution {
public:

    long long sum(vector<int> &nums , int divisor, int threshold) {
        long long sum1 = 0;
        for(int i = 0; i < nums.size(); i++){
            sum1 += (nums[i] + divisor -1) / divisor;
        }
        return sum1;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = nums[0];
        int divisor = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > maxi){
                maxi = nums[i];
            }
        }
        int s = 1;
        int e = maxi;
        while(s<= e){
            int mid = s+(e-s)/2;
            int result = sum(nums,mid, threshold);
            if(result <= threshold){
                divisor = mid;
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }
        return divisor;
    }
};