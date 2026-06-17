
/*
class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        int n = nums.size();
        map<int,int> mp;
        
        for(int i = 0;i<n;i++){
            mp[deadline[i]] =  profit;
            
        }
        
        sort(mp.begin(),mp.end().[]map<mp<int,int>& a ,map<int,int>& b){
            return a.second > b.second;
        }
           
            
        int deadline = 0;
        
        for(int i = 0;i<n;i++){
            deadline = max(deadline,mp.first);
            
        }
        vector<int> a(2,0);
        
        // one based indexing 
        vector<int> task(deadline+1,0); // am array of zeroes 
        
        for(int i=0;i<n;i++){
            for(int j=mp.first;i>0;j--){
                if(!task[i]){
                    task[i]++;
                    a[0]++;
                    a[1] +=mp.second;
                    
                    
                }
            }
        }
        
        return ans;
        
        
        
        
        
    }
};

*/ 

/// i was sorting the map lol


/// with the pair container


class Solution {
public:
    vector<int> jobSequencing(vector<int> &deadline,
                              vector<int> &profit) {

        int n = deadline.size();

        int num_jobs_done = 0;
        int total_profit = 0;

        vector<pair<int,int>> Jobs;

        for(int i = 0; i < n; i++) {
            Jobs.push_back({deadline[i], profit[i]});
        }

        sort(Jobs.begin(), Jobs.end(),
             [](auto &a, auto &b) {
                 return a.second > b.second;
             });

        int mxDeadline = 0;

        for(int d : deadline) {
            mxDeadline = max(mxDeadline, d);
        }

        vector<int> task(mxDeadline + 1, 0);

        for(auto &Job : Jobs) {

            int d = Job.first;
            int p = Job.second;

            for(int i = d; i > 0; i--) {

                if(!task[i]) {

                    task[i] = 1;

                    num_jobs_done++;
                    total_profit += p;

                    break;
                }
            }
        }

        return {num_jobs_done, total_profit};
    }
};