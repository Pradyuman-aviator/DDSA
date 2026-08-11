#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr1[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

// so ww gonna reverse the row of the matrix like we do in normal array by taking the two arrays

for(int i =0;i<3;i++){
    int start= 0;
    int end = 4-1;

    while(start<end){
       swap(arr1[i][start],arr1[i][end]); 
       start++;
       end--;

    }


}

// printing the rows and columns 

for(int  i =0;i<3;i++){
    for(int j =0;j<4;j++){
        cout <<  arr1[i][j] << "\n";

    }
}



    return 0;
}