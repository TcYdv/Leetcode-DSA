class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;

        for(int i=0; i<n; i++){
            if(nums[i] > nums[(i+1)%n]){
                cnt++;
            }
        }

        if(cnt <= 1){ // 1 ya 0 non decreasing curve h 
            return true;
        }
        else{ // 2 se jyada curve
            return false;
        }

    }
};