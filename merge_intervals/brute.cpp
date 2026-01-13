class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<int> used(n, 0);
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++) {
            if (used[i]) continue;
            int start = intervals[i][0];
            int end   = intervals[i][1];
            used[i] = 1;
            for (int j = i + 1; j < n; j++) {
                if (used[j]) continue;
                int a = intervals[j][0];
                int b = intervals[j][1];
               
                if (a <= end && b >= start) {
                    start = min(start, a);
                    end   = max(end, b);
                    used[j] = 1;
                }
            }

            ans.push_back({start, end});
        }
        return ans;
    }
};
