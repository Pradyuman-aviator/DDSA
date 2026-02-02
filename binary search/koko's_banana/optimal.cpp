
class Solution {
public:
    int findMax(vector<int>& v) {
        int maxi = INT_MIN;
        for (int x : v) {
            maxi = max(maxi, x);
        }
        return maxi;
    }

    int calculateTotalHours(vector<int>& v, int hourly) {
        int totalH = 0;
        for (int x : v) {
            totalH += ceil((double)x / (double)hourly);
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findMax(piles);

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int totalH = calculateTotalHours(piles, mid);

            if (totalH <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
