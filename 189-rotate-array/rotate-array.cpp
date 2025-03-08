class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k > n){
            k %= n;
        }
        int m = n-k;
        vector<int> left , right;
        for(int i=0; i<n; i++){
            if(i < m){
                left.push_back(nums[i]);
            }
            else{
                right.push_back(nums[i]);
            }
        }
        
        int j=0;
        for(int i=0; i<right.size(); i++){
            nums[j] = right[i];
            j++;
        }
        for(int i=0; i<left.size(); i++){
            nums[j++] = left[i];
        }
    }
};