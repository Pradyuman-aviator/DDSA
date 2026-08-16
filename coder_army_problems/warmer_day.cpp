// brute force O(n2)


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();

        vector<int> ans;

        for(int i = 0;i<n;i++) {
            int today_temp = temperatures[i];
            int days = 0;
            for(int j =i+1;j<n;j++) {
                days++;
                int current_temp =temperatures[j];

                if(current_temp> today_temp) {
                    ans.push_back(days);
                    break;
                }
                if(j==n-1) {
                    ans.push_back(0);
                }
            }
            // Handles the last element
            if(i == n - 1) {
                ans.push_back(0);
            }
        }

        return ans;
    }
};

/// more fkin brute force

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();

        vector<int> ans(n, 0);

        for(int i = 0; i < n; i++) {

            if(temperatures[i] == 99) {
                ans[i] = 0;
                continue;
            }

            int today_temp = temperatures[i];
            int days = 0;

            for(int j = i + 1; j < n; j++) {

                days++;

                int current_temp = temperatures[j];

                if(current_temp > today_temp) {
                    ans[i] = days;
                    break;
                }
            }
        }

        return ans;
    }
};