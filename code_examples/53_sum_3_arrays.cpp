//Gentry
//October 19, 2021

#include<iostream>


using namespace std;


//Write a function to compute the element-wise sum of 3 arrays: a, b, and c
//  Array a should be unchanged
//  Array b should be set to a[i] + b[i] for all i
//  Array c should be set to a[i] + b[i] + c[i] for all i


int main(){
    int SIZE = 10;

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i = 0; i < ROWS; i++){
        cout << a[i] << endl;
    }

    return 0;
}



