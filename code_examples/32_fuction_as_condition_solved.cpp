//Gentry
//October 07, 2021

#include<iostream>
#include<cmath>


using namespace std;

//Between
//Parameters:
//      int a: the variable to check
//      int upper: the upper bound
//      int lower: the lower bound
//Returnrs: true is a is between lower and upper, false otherwise
bool between(int a, int upper, int lower){
    return a > lower && a < lower;
}

int main(){
    int a = 2;
    while(between(a, 1, 10)){
        cout << "The variable is: " << a << endl;
        a++;
    }
    return 0;
}


