class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        if(n < k){
            return 0;
        }
        int cnt_W = 0;
        // first w elements one window
        for(int i=0; i<k; i++){
            if(blocks[i] == 'W'){
                cnt_W++;
            }
        }
        int mini_W = cnt_W;
        // after taking first k element 
        // take one by one element in right side 
        // and remove element one by one from left side
        for(int i=k; i<n; i++){
            if(blocks[i-k] == 'W'){ // Remove leftmost element
                cnt_W--;
            }
            if(blocks[i] == 'W'){ // Add new rightmost element
                cnt_W++;
            }
            mini_W = min(mini_W , cnt_W);
        }
        return mini_W;
    }
};