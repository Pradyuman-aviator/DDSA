#include<bits/stdc++.h> 
using namespace std;

int main(){

    
   int arr1[3][4] = {

        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };


    for(int i=0;i<3;i++){

        if(i%2 ==0){

            //print the stuff forward

            for(int j=0;j<4;i++){
                cout<<arr1[i][j];
            }
        }

        for(int j=3-1;j>0;j--){
            cout<<arr1[i][j];
        }
    }


return 0;

}