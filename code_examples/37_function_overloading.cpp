//Gentry
//October 07, 2021

#include<iostream>
#include<cmath>


using namespace std;

//Implement these three versions of sumDigits to make the function more useable
//Examples:
//  sumDigits(12)           = 3
//  sumDigits(12, 34)       = 10
//  sumDigits(12, 34, 56)   = 21

int sumDigits(int);
int sumDigits(int, int);
int sumDigits(int, int, int);

int main(){
    cout << "The sum of the digits in 654321 is " << sumDigits(654321) << endl;
    cout << "The sum of digits in 654 and 321 is " << sumDigits(654, 321)
        << endl;
    cout << "The sum of digits in 65, 43, and 21 is " << sumDigits(65, 43, 21)
        << endl;
    return 0;
}



