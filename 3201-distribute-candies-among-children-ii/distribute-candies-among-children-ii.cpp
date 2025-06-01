class Solution {
public:
    long long distributeCandies(int n, int limit) {
        long long sum = 0;

        int firstMax = min(limit , n);
        int firstMin = max(0 , n - 2 * limit);

        for(int i = firstMin; i<= firstMax; i++){
            int secondMin = max(0 , n - i - limit);
            int secondMax = min(limit , n - i);

            int j = secondMax - secondMin + 1;
            sum += max(0,j);
        }
        return sum;
    }
};