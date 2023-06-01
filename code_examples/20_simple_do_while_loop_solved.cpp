//Gentry
//September 16, 2021

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    //Use a do while loop to repeatedly prompt the user to enter an integer
    int input;
    cout << fixed << setprecision(1);
    do{
    //Print the square root of the user's number
        cout << "Enter a number: ";
        cin >> input;
        cout << "Square root: " << sqrt(input) << endl;
    //Break the loop if the user enters a 0
    }while(input != 0);
    return 0;
}


