#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int spacecannon(vector<int> &A, vector<int> &B) {
        vector<int> arrival;
        int n1= A.size();
        int n2=B.size();

        for(int i=0;i<n1;i++){

            arrival.push_back(A[i]/B[i]);

        }
        sort(arrival.begin(),arrival.end());
        int destroyed =0;
        for(int i=0;i<n1;i++){
            if(arrival[i] <=i) break;

            destroyed++;

        }
        return destroyed;
    }
};