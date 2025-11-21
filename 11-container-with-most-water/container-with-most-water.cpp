class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int max_water = 0;

        while (left < right) {
            int width = right - left;
            int min_ht = min(height[left], height[right]);
            int area = width * min_ht;
            max_water = max(max_water, area);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return max_water;
    }
};