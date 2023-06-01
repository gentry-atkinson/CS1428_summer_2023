//Gentry
//November 09, 2021

#include<iostream>
#include<cstdlib>


using namespace std;


//Write a pair of functions
//  writeSecretMessage should take a plain message and return an enciphered one
//  readSecretMessage should take an enciphered message and return a plain one
//  use the "Caesar Cipher" to encrypt your message


int main(){
    string originalMessage, encodedMessage, decodedMessage;
    const int SHIFT = 3;
    getline(cin, originalMessage);
    cout << "Original message: " << originalMessage << endl;
    encodedMessage = writeSecretMessage(originalMessage, SHIFT);
    cout << "Encoded message: " << encodedMessage << endl;
    decodedMessage = readSecretMessage(encodedMessage, SHIFT);
    cout << "Decoded message: " <<decodedMessage << endl;
    return 0;
}



