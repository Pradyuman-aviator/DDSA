#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> Binary;
    int target;

    int start = 0;
    int end = Binary.size();

    while(start <= end){
        int mid = (start+end)/2;

        if(Binary[mid] == target){
            cout << "found";

        }
        else if(Binary[mid] < target){
            mid = start+1;
        }
        else{
            mid = end-1;
    }
    }
}