class Solution {
public:
    static bool compare(pair<int,int>& v1, pair<int,int>& v2){
        if(v1.second == v2.second){
            return v1.first > v2.first;
        }
        else{
            return v1.second < v2.second;
        }
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x : nums){
            mp[x]++;
        }
        vector<pair<int,int>> freq;
        for(auto x : mp){
            freq.push_back(x);
        }
        sort(freq.begin(),freq.end(),compare);
        
        vector<int> sorted;
        for(auto x : freq){
            for(int i=0; i<x.second; i++){
                sorted.push_back(x.first);
            }
        }
        return sorted;
    }
};