//Gentry
//November 23, 2021

#include<iostream>
#include<cmath>


using namespace std;

//Replace these constants with a single enum
//const int RED = 0;
//const int BLUE = 1;
//const int YELLOW = 2;

enum Colors{RED, BLUE, YELLOW};

int main(int argc, char** argv){
    cout << "Pick your favorite color: " << endl;
    cout << "\t0. Red" << endl;
    cout << "\t1. Blue" << endl;
    cout << "\t2. Yellow" << endl;
    int choice;
    cin >> choice;

    switch(choice){
        case RED:
            cout << "You are in Gryfindor" << endl;
            break;
        case BLUE:
            cout << "You are in Ravenclaw" << endl;
            break;
        case YELLOW:
            cout << "You are in Huffle Puff" << endl;
            break;
        default:
            cout << "Try again." << endl;
    }
    return 0;
}



