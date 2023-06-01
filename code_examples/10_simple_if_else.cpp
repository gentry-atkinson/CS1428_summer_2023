//Gentry
//September 07, 2021

#include<iostream>

using namespace std;

int main(){
    //Prompt the user to enter a number of cents as an integer
    cout << "Please type a number of cents: ";
    int cents;
    cin >> cents;
    //If the value can be given using only dimes print "All dimes"
    if (cents%10 == 0){
        cout << "All dimes" << endl;
    }
    //Otherwise print "Not all dimes"
    else {
        cout << "Not all dimes" << endl;
    }
    return 0;
}


