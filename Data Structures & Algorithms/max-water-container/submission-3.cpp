class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int ans = INT_MIN;
        int left = 0, right = heights.size() - 1;
        while (left < right) {
            int m = min(heights[left], heights[right]);
            int area = m * (right - left);
            ans = max(ans, area);
            if (heights[left] <= heights[right])
                left++;
            else
                right--;
        }
        return ans;
    }
};
