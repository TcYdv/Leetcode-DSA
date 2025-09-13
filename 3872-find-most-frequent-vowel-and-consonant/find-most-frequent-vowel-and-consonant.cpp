class Solution {
public:
    int maxFreqSum(string& s) {
        int freq[26]={0};
        for(char c: s)
            freq[c-'a']++;
        constexpr unsigned mask=1+(1<<('e'-'a'))+(1<<('i'-'a'))+(1<<('o'-'a'))+(1<<('u'-'a'));
        int maxV=0, maxC=0;
        for(int i=0; i<26; i++){
            if (((1<<i) & mask)!=0)
                maxV=max(maxV, freq[i]);
            else
                maxC=max(maxC, freq[i]);
        }
    //    cout<<maxV<<","<<maxC<<endl;
        return maxV+maxC;
    }
};