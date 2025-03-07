class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int mxNum = -1;
        unordered_map<int,int> freq;
        for(auto x : nums){
            freq[x]++;
            if(freq[x] > n/2){
                mxNum = x;
                break;
            }
        }
        return mxNum;
    }
};