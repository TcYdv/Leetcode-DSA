class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int maxDiff = -1;
        int miniElement = nums[0];
        for(int i=1; i<n; i++){
            miniElement = min(nums[i] , miniElement);
            maxDiff = max(maxDiff , nums[i] - miniElement);
        }
        return maxDiff == 0 ? -1 : maxDiff;
    }
};