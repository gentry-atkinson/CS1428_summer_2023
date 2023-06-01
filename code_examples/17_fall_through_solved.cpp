//Gentry
//September 14, 2021

#include<iostream>

using namespace std;

int main(){
    //Prompt the user to type a character
    char input;
    cout << "Please enter one character: ";
    cin >> input;
    //Using a switch with fall-through cases:
    switch(input){
    // Print "Vowel" if the character is a, e, i , o, or u
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cout << "Vowel" << endl;
            break;
    // Print "Not Vowel" otherwise
        default:
            cout << "Not Vowel" << endl;
    }
    return 0;
}


