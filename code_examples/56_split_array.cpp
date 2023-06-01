//Gentry
//November 09, 2021

#include<iostream>
#include<cstdlib>


using namespace std;


//Split Array
//Parameters:
//  a: a 1D array of integers
//  b: an empty 2D array
//  SIZE: this size of a
//Returns: nothing
//Side Effects: All even-indexed values from a will be stored in column 0 of b.
//  All odd-indexed values from a will be stored in column 1 of b.
void splitArray(int a[], int b[][2], const int SIZE){

    return;
}


int main(){
    srand(1899);
    const int SIZE = 20;
    int test_array[SIZE];
    int out_array[SIZE/2][2];

    for (int i = 0; i < SIZE; i++) {
        test_array[i] = (rand() % 20);
        cout << test_array[i] << ' ';
    }
    cout << endl;

    splitArray(test_array, out_array, SIZE);

    for (int i = 0; i < SIZE/2; i++) {
        cout << out_array[i][0] << ' ';
        cout << out_array[i][1] << endl;
    }

    return 0;
}



