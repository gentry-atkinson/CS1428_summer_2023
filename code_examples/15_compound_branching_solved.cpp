//Gentry
//September 07, 2021

#include<iostream>

using namespace std;

int main(){
    //Prompt the user to enter an integer
    int input;
    cout << "Type a number: ";
    cin >> input;

    //Three possible solutions

    //if the number is odd AND greater than 10, print "big odd"
    //if the number is even AND greater than 10, print "big even"
    //if the number is odd AND less than 10, print "small odd"
    //if the number is even AND less than 10, print "small even"
    if(input > 10 && input%2==1){
        cout << "big odd" << endl;
    }
    else if(input > 10 && input%2==0){
        cout << "big even" << endl;
    }
    else if(input < 10 && input%2==1){
        cout << "small odd" << endl;
    }
    else if(input < 10 && input%2==0){
        cout << "small even" << endl;
    }

    //if the number is odd AND greater than 10, print "big odd"
    //if the number is even AND greater than 10, print "big even"
    //if the number is odd AND less than 10, print "small odd"
    //if the number is even AND less than 10, print "small even"
    if(input > 10){
        if(input%2==1){
            cout << "big odd" << endl;
        }
        else{
            cout << "big even" << endl;
        }
    }
    else if(input < 10){
        if(input%2==1){
            cout << "small odd" << endl;
        }
        else{
            cout << "small even" << endl;
        }
    }

    //if the number is odd AND greater than 10, print "big odd"
    //if the number is even AND greater than 10, print "big even"
    //if the number is odd AND less than 10, print "small odd"
    //if the number is even AND less than 10, print "small even"
    if(input > 10){
        cout << "big ";
    }
    else if(input < 10){
        cout << "small ";
    }
    if(input%2==1){
        cout << "odd" << endl;
    }
    else{
        cout << "even" << endl;
    }


    return 0;
}


