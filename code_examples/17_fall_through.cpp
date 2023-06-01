//Gentry
//September 14, 2021

#include<iostream>

using namespace std;

int main(){
    //Prompt the user to type a character
    //Using a switch with fall-through cases:
    // Print "Vowel" if the character is a, e, i , o, or u
    // Print "Not Vowel" otherwise
    cout << "Type one character: ";
    char input;
    cin >> input;

    switch (input){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Vowel" << endl;
            break;
        default:
            cout << "Not Vowel" << endl;
    }
    return 0;
}


