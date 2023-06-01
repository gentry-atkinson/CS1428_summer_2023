//Gentry
//October 19, 2021

#include<iostream>


using namespace std;


//Write a function to compute the sum of a 2D array.
//Guarantee the safety of the array


const int ROWS = 5;
const int COLS = 5;

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



