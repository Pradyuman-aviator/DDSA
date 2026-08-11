#include<bits/stdc++.h>
using namespace std;



// this functio prints the value of the array column wise
// we assing the value as arr[][4] as the compiler needs number of column accessing the The data
void colele(int arr[][4],int col,int row){
    for(int j=0;j<col;j++)
    for(int i=0;i<row;i++)
    cout << arr[i][j] << " ";
}


//fucniton for checking a element is present or not
bool is_prese(int arr[][4], int col, int row, int X) {

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {

            if(arr[i][j] == X) {
                return true;
            }
        }
    }

    return false;
}



int main(){

    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] = {1,2,3,4,5,6,4,3,9,1,5,1};


// print all the values in array

for(int row =0;row<3;row++)
for(int col = 0;col<4;col++)

cout << arr[row][col] << " ";

//printing the number columns wise 

colele(arr,4,3);



// find the target in an 2d array 

// let

int X = 100;
int row = 3;
int col =4;

if(is_prese(arr,4,3,X)){
cout << " Present" << " ";
}
else{
    cout << "Nope" << " ";

}


//so if i have to add two matrix  i have to store taht in the third array
 

int ans[3][4];


for(int i = 0;i<3;i++){
    for(int  j=0;j<4;j++)

    
{
        ans[i][j] = arr1[i][j] + arr2[i][j];
}

}

for(int i=0;i<3;i++)
for(int j=0;j<4;j++)

cout << ans[i][j] << "\n";



}





