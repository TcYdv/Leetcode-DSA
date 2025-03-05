class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n,0);

        int posIdx = 0, negIdx = 1;  

        for(int i=0; i<n; i++){
            if(nums[i] > 0){
                arr[posIdx] = nums[i];
                posIdx += 2; 
            }
            else{
                arr[negIdx] = nums[i];
                negIdx += 2;
            }
        }
        return arr;
    }
};