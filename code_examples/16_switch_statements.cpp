//Gentry
//September 07, 2021

#include<iostream>

using namespace std;

int main(){
    //Prompt the user to type their name
    //Using a switch:
    //  If their name begins with a 'G', print "Great!"
    //  If their name begins with a 'B', print "Bad!"
    //  If their name begins with an 'M', print "Might be alright."
    //  Otherwise, print the name.

    cout << "Type you name: ";
    string name;
    //getline(cin, name);
    cin >> name;

    switch (name[0]){
        case 'G':
            cout << "Great!" << endl;
            break;
        case 'B':
            cout << "Bad!" << endl;
            break;
        case 'M':
            cout << "Might be alright." << endl;
            break;
        default:
            cout << name << endl;
            break;
    }

    return 0;
}


