//Gentry
//December 02, 2021

#include<iostream>
#include<cmath>


using namespace std;

//Implement these function

//Multiply matrix A by matrix B in place.
//Store the result in matrix A
void matrixMult(int a[], const int b[], const int numRows, const int numColumns);

//Print a matrix
void printMatrix(const int a[], const int numRows, const int numCols);


int main(int argc, char** argv){
    int a[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int b[][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    int c[][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    }
    cout << "Matrix A" << endl;
    printMatrix(a, 3, 3);
    cout << "Matrix B" << endl;
    printMatrix(b, 3, 3);
    cout << "Matrix C" << endl;
    printMatrix(b, 3, 3);

    cout << endl << endl;

    cout << "AxB" << endl;
    matrixMult(a, b, 3, 3);

    cout << "BxC" << endl;
    matrixMult(b, c, 3, 3);

    cout << "AxC" << endl;
    matrixMult(a, c, 3, 3);

    return 0;
}



