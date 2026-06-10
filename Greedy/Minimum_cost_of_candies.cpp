class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();

        sort(cost.rbegin(),cost.rend());

        int i = 0;
        int total_cost = 0;

        while(i <cost.size()){
            total_cost += cost[i];

            if(i+1 < n){
                total_cost +=cost[i+1]; 
            }

            // now the third one is free

            i+=3;
        }

        return total_cost;
        
    }
};