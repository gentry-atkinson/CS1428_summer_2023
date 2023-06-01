//Gentry
//September 16, 2021

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    //A prime number is only divisible by 1 and itself\
    //Prompt the user to enter a number
    //Print "Not Prime" if any number other than 1 evenly divides the number
    //Print "Prime" otherwise
    //Solve once with a while and once with a do-while
    cout << "Enter a number: ";
    int number;
    cin >> number;
    int divisor = 2;
    if(number == 2){
        cout << "Prime" << endl;
        return 0;
    }
    else if(number == 1){
        cout << "Not Prime" << endl;
        return 0;
    }


    //while solution
//    while(divisor < number){
//        if(number%divisor==0){
//            cout << "Not Prime" << endl;
//            return 0;
//        }
//        divisor++;
//    }
//    cout << "Prime" << endl;

    //do while solution
    do{
        if(number%divisor==0){
            cout << "Not Prime" << endl;
            return 0;
        }
        divisor++;
    }while(divisor < number);
    cout << "Prime" << endl;

    return 0;
}


