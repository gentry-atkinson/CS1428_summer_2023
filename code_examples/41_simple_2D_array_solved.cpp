//Gentry
//October 19, 2021

#include<iostream>
#include<fstream>


using namespace std;

//create a 2D array of integers with 3 rows and 3 columns
//prompt the user to enter 9 values to store in the array
//print the average of the 9 integers

int main(){
    int a[3][3];
    int sum = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Type one value: ";
            cin >> a[i][j];
            sum += a[i][j];
        }
    }
    cout << "Average: " << sum/9.0 << endl;

    return 0;
}



