//Gentry
//December 02, 2021

#include<iostream>
#include<cmath>


using namespace std;

//Implement these functions

//Prompt the user to enter 3 numbers, return the lowest of the 3
int lowestOfThree();

//Print every number that evenly divides the parameter
void allDivisors(int n);


int main(int argc, char** argv){
    int a = lowestOfThree();
    cout << "Your number is: " << a << endl;
    cout << "The numbers that divide your number are: " << endl;
    allDivisors(a);
    return 0;
}



