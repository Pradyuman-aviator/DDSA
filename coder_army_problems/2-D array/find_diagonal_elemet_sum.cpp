=#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr1[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int maxSum = INT_MIN;
    int max_index = -1;

    for(int i = 0; i < 3; i++) {

        int Sum = 0;   // reset for every row

        for(int j = 0; j < 4; j++) {
            Sum += arr1[i][j];
        }

        if(Sum > maxSum) {
            maxSum = Sum;
            max_index = i;
        }
    }

    cout << max_index;

    return 0;
}