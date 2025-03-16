class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
         long long low = 1;
         long long high = (long long)*min_element(ranks.begin(), ranks.end()) * cars * cars;

        while (low < high) {
            long long mid = low + (high - low) / 2, repaired_cars = 0;
            for (int& r: ranks)
                repaired_cars += sqrt(mid / r);
            if (repaired_cars < cars) low = mid + 1;
            else high = mid;
        }
        return low;
    }
};