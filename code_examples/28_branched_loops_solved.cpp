//Gentry
//September 23, 2021

#include<iostream>
#include<fstream>


using namespace std;


int main(){
    //The Collatz Conjecture says this:
    //  Start with any number greater than 0
    //  If the number is even, divide it by 2
    //  If the number is odd, multiply it by 3 and add 1
    //  The conjecture is that ANY number ends up back at 1

    //Write a program that allows the user to enter a number
    //Continue prompting the user until they enter a number > 0
    int user_num;
    do{
        cout << "Enter a number greater than 0: ";
        cin >> user_num;
    }while(user_num <= 0);
    //Apply the operations described by Collatz and print every value until you reach 1
    while(user_num != 1){
        if(user_num%2==0){
            user_num /= 2;
        }
        else{
            user_num = user_num * 3 + 1;
        }
        cout << user_num << endl;
    }

    return 0;
}


