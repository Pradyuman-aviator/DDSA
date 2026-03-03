class Solution {
public:

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

        int n = weights.size();

        int low = 0, high = 0;

        // find max and sum
        for (int w : weights) {
            low = max(low, w);
            high += w;
        }

        // try every possible capacity
        for (int capacity = low; capacity <= high; capacity++) {
            int requiredDays = fun(weights, capacity);

            if (requiredDays <= days) {
                return capacity;
            }
        }

        return -1; // should never reach here
    }
};