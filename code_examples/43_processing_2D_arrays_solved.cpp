//Gentry
//October 19, 2021

#include<iostream>
#include<fstream>


using namespace std;

const int SIZE = 10;
const int a[SIZE][SIZE] = {
    {69, 99, 13, 15, 11, 82, 66, 69, 100, 56},
    {15, 26, 2, 12, 6, 60, 8, 9, 26, 10},
    {78, 50, 10, 7, 55, 33, 80, 70, 3, 0},
    {97, 96, 79, 43, 31, 78, 8, 24, 73, 68},
    {12, 46, 38, 100, 34, 15, 87, 98, 19, 91},
    {95, 3, 70, 7, 68, 69, 96, 63, 15, 40},
    {8, 86, 9, 77, 96, 57, 65, 43, 64, 38},
    {78, 44, 54, 84, 6, 97, 65, 68, 79, 0},
    {10, 65, 80, 61, 1, 36, 79, 78, 34, 90},
    {68, 7, 100, 36, 66, 16, 75, 84, 65, 96}
};

//print the max value in each row of a
//then print the max of the max values

int main(){
    int maxes[SIZE];
    for(int i = 0; i < SIZE; i++){
        int biggest = a[i][0];
        for(int j = 1; j<SIZE; j++){
            if(a[i][j] > biggest){
                biggest = a[i][j];
            }
        }
        maxes[i] = biggest;
    }
    int biggestBiggest = maxes[0];
    cout << "Max of Rows" << endl;
    cout << "-----------" << endl;
    for(int i = 0; i < SIZE; i++){
        cout << "Row " << i << ": " << maxes[i] << endl;
        if(maxes[i] > biggestBiggest){
            biggestBiggest = maxes[i];
        }
    }
    cout << "Max of whole table: " << biggestBiggest << endl;

    return 0;
}



