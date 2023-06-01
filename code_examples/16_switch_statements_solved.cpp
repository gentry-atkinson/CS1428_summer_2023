//Gentry
//September 07, 2021

#include<iostream>

using namespace std;

int main(){
    //Prompt the user to type their name
    string name;
    cout << "Please type your name: ";
    cin >> name;
    //Using a switch:
    //  If their name begins with a 'G', print "Great!"
    //  If their name begins with a 'B', print "Bad!"
    //  If their name begins with an 'M', print "Might be alright."
    switch(name[0]){
        case 'G':
            cout << "Great!" << endl;
            break;
        case 'B':
            cout << "Bad!" << endl;
            break;
        case 'M':
            cout << "Might be alright" << endl;
            break;
        default:
            cout << name << endl;
            break;
    }
    //  Otherwise, print the name.

    return 0;
}


