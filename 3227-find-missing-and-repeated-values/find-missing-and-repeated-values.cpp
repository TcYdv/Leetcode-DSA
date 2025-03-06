class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int missingNum = -1;
        int doubleNum = -1;
        int n = grid.size();
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                mp[grid[i][j]]++;
            }
        }
        for(int i=1; i<=n*n; i++){
            if(mp[i] == 0){
                missingNum = i;
            }
            else if(mp[i] == 2){
                doubleNum = i;
            }
        }
        return {doubleNum , missingNum};
    }
};