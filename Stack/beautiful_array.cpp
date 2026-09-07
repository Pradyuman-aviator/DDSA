class Solution {
public:
    vector<int> makeBeautiful(vector<int> arr) {
        stack<int> s;

        for (int x : arr) {
            if (s.empty()) {
                s.push(x);
            }
            else if ((s.top() >= 0 && x < 0) ||
                     (s.top() < 0 && x >= 0)) {
                s.pop();
            }
            else {
                s.push(x);
            }
        }

        vector<int> ans;

        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};