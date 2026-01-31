class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPile = 0;
        for (int x : piles) {
            maxPile = max(maxPile, x);
        }

        for (int k = 1; k <= maxPile; k++) {
            long long hours = 0;

            for (int bananas : piles) {
                hours += (bananas + k - 1) / k;  
            }

            if (hours <= h) {
                return k;
            }
        }

        return maxPile; 
    }
};
