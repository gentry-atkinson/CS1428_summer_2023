//Gentry
//September 07, 2021

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string file1, file2;
    //Prompt the user to type a filename for even numbers
    cout << "Filename for even numbers?";
    cin >> file1;
    //Prompt the user to type a filename for odd numbers
    cout << "Filename for odd numbers?";
    cin >> file2;
    //Open two filestreams using the file names with ".txt" added to the end
    ofstream oNums(file2 + ".txt");
    ofstream eNums(file1 + ".txt");
    //Prompt the user to enter 5 integers
    int user_input;
    cout << "Please type a number: ";
    cin >> user_input;
    if( user_input%2 == 0){
        eNums << user_input << endl;
    }
    else {
        oNums << user_input << endl;
    }
    //Write every even number to the even file
    //Write every odd number to the odd file
    cout << "Please type a number: ";
    cin >> user_input;
    if( user_input%2 == 0){
        eNums << user_input << endl;
    }
    else {
        oNums << user_input << endl;
    }
    cout << "Please type a number: ";
    cin >> user_input;
    if( user_input%2 == 0){
        eNums << user_input << endl;
    }
    else {
        oNums << user_input << endl;
    }
    cout << "Please type a number: ";
    cin >> user_input;
    if( user_input%2 == 0){
        eNums << user_input << endl;
    }
    else {
        oNums << user_input << endl;
    }
    cout << "Please type a number: ";
    cin >> user_input;
    if( user_input%2 == 0){
        eNums << user_input << endl;
    }
    else {
        oNums << user_input << endl;
    }
    //Close both file streams
    eNums.close();
    oNums.close();
    return 0;
}


