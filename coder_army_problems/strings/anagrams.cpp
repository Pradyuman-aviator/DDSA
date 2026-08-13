class Solution {

public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        unordered_map<string, vector<string>> mp;


        for(auto s : strs){
            vector<int> freq(26,0);

           for(auto c:s) {
            freq[c-'a']++;

           }
        

        string key;

        for(int x : freq){
            key += to_string(x);
            key+='#';

        }

        mp[key].push_back(s);
        }

        vector<vector<string>> ans;

        for(auto p:mp){
            ans.push_back(p.second);
        }

        return ans;



        
    }
};