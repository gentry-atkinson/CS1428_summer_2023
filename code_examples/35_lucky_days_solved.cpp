//Gentry
//October 07, 2021

#include<iostream>
#include<cmath>


using namespace std;

//Implement a function called isLucky that will return true if a day is lucky
//  and false otherwise. A day is lucky if the sum of the digits in the day and
//  month is the same as the sum of the digitis in the year.
//
//Examples:
//  12/01/2002          4/4     Lucky
//  01/05/2016          6/9     Not Lucky
//  01/01/2000          2/2     Lucky
//  04/01/2021          5/5     Lucky
//  04/02/2021          6/5     Not Lucky
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


