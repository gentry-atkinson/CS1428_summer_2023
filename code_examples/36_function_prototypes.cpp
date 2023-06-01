//Gentry
//October 07, 2021

#include<iostream>
#include<cmath>


using namespace std;

//Move these functions below the main function and correctly prototype them.
int sumDigits(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

bool isLucky(int month, int day, int year){
    int mdSum = sumDigits(month);
    mdSum += sumDigits(day);
    return mdSum == sumDigits(year);
}


int main(){
    cout << "05/06/2009 is ";
    if(isLucky(5,6,2009)) cout << " lucky." << endl;
    else cout << " not lucky." << endl;

    cout << "11/12/2009 is ";
    if(isLucky(11, 12,2009)) cout << " lucky." << endl;
    else cout << " not lucky." << endl;

    cout << "01/01/0001 is ";
    if(isLucky(1,1,1)) cout << " lucky." << endl;
    else cout << " not lucky." << endl;

    cout << "02/14/2014 is ";
    if(isLucky(2,14,2014)) cout << " lucky." << endl;
    else cout << " not lucky." << endl;

    return 0;
}


