//Gentry
//October 19, 2021

#include<iostream>


using namespace std;



const int ROWS = 5;
const int COLS = 5;

//Write a function to compute the sum of a 2D array.
//Guarantee the safety of the array
int sum2dArray(int arr[][COLS]){
    int sum = 0;
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            sum += arr[i][j];
        }
    }
    return sum;
}


int main(){
    int a[ROWS][COLS] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5}
    };

    cout << "The sum of my array is: " << sum2dArray(a) << endl;

    return 0;
}



