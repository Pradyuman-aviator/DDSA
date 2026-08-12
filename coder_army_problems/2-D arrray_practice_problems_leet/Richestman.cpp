// first approach (brute force)

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rows = accounts.size(); // rows

        int columns  = accounts[0].size();



        int Richest_guy =  INT_MIN;

        for(int i =0;i<rows;i++){
            int sum =0;
            for(int j=0;j<columns;j++){
                sum +=accounts[i][j];
                 Richest_guy = max(Richest_guy,sum);

            }
        }

return Richest_guy;
        
    }
};


/// next approach ( STL)


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rows = accounts.size();

        int columns = accounts[0].size();

        int ans = INT_MIN;

        for(int i=0;i<rows;i++){
            // accumulate function of CPP STL
            int sum =  accumulate(accounts[i].begin(),accounts[i].end(),0);

            ans = max(ans,sum);

        }

        return ans;
    }
};