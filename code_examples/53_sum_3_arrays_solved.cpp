//Gentry
//October 19, 2021

#include<iostream>


using namespace std;


//Write a function to compute the element-wise sum of 3 arrays: a, b, and c
//  Array a should be unchanged
//  Array b should be set to a[i] + b[i] for all i
//  Array c should be set to a[i] + b[i] + c[i] for all i

void sumThreeArrays(const int a[], int b[], int c[],const int SIZE){
    for(int i = 0; i < SIZE; i++){
        b[i] = a[i] + b[i];
    }
    for(int i = 0; i < SIZE; i++){
        c[i] = c[i] + b[i];
    }
    return;
}


int main(){
    int SIZE = 10;

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    sumThreeArrays(a, b, c, SIZE);

    for(int i = 0; i < SIZE; i++){
        cout << a[i] << ' ';
    }
    cout << endl;
    for(int i = 0; i < SIZE; i++){
        cout << b[i] << ' ';
    }
    cout << endl;
    for(int i = 0; i < SIZE; i++){
        cout << c[i] << ' ';
    }

    return 0;
}



