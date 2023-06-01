//Gentry
//September 23, 2021

#include<iostream>
#include<fstream>


using namespace std;


int main(){
    //The Fibonaci Sequence is a series of numbers where each 2 add up to the next
    //Like this: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
    //
    //Let the user repeatedly enter numbers
    //For each number that the user types, print "Fobonaci" if it is in the Fiboncai Sequence
    //Otherwise, print "Not Fibonaci"
    //
    //Terminate the program if the user enters a negative number

    while(true){
        int user_num;
        cout << "Type a number: ";
        cin >> user_num;
        if (user_num < 0) break;
        int small = 0, big = 1;
        bool fib = false;

        while (small <= user_num){
            if(small == user_num || big == user_num){
                fib = true;
            }
            int temp = big;
            big = small + big;
            small = temp;
        }

        if(fib) cout << "Fibonaci" << endl;
        else cout << "Not Fibonaci" << endl;
    }

    return 0;
}


