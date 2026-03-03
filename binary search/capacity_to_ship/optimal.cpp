class Solution {
public:

    int maxi(vector<int>& weights) {
        int mx = 0;
        for (int w : weights) {
            mx = max(mx, w);
        }
        return mx;
    }

    int sum(vector<int>& weights) {
        int total = 0;
        for (int w : weights) {
            total += w;
        }
        return total;
    }
    int fun(vector<int>& weights, int capacity) {
        int days = 1;    
        int load = 0;
        for (int w : weights) {
            if (load + w > capacity) {
                days++;
                load = w;
            } else {
                load += w;
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int low = maxi(weights);
        int high = sum(weights);
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int requiredDays = fun(weights, mid);
            if (requiredDays <= days) {
                high = mid - 1;   
            } else {
                low = mid + 1;    
            }
        }
        return low;
    }
};