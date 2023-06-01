//Gentry
//September 07, 2021

#include<iostream>

using namespace std;

int main(){
    //Prompt the user to enter an integer
    //if the number is odd AND greater than 10, print "big odd"
    //if the number is even AND greater than 10, print "big even"
    //if the number is odd AND less than 10, print "small odd"
    //if the number is even AND less than 10, print "small even"

    cout << "Enter a number: ";
    int user_input;
    cin >> user_input;
    if(user_input % 2 == 1 && user_input > 10){
        cout << "big odd" << endl;
    }
    else if(user_input % 2 == 0 && user_input > 10){
        cout << "big even" << endl;
    }
    else if(user_input % 2 == 1 && user_input < 10){
        cout << "small odd" << endl;
    }
    else{
        cout << "small even" << endl;
    }

    //Solve this three ways
    if (user_input % 2 == 1){
        //all of theses numbers are odd
        if(user_input < 10){
            cout << "small odd" << endl;
        }
        else{
            cout << "big odd" << endl;
        }
    }
    else{
        //all of these numbers are even
        if(user_input < 10){
            cout << "small even" << endl;
        }
        else{
            cout << "big even" << endl;
        }
    }

    if (user_input < 10){
        //all of theses numbers are small
        if(user_input % 2 == 0){
            cout << "small even" << endl;
        }
        else{
            cout << "small odd" << endl;
        }
    }
    else{
        //all of these numbers are big
        if(user_input % 2 == 0){
            cout << "big even" << endl;
        }
        else{
            cout << "big odd" << endl;
        }
    }
    return 0;
}


