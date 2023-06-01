//Gentry
//August 31 2021

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    //Open the file "Output_08.txt"
    ofstream out_file("Output_08.txt");
    //Prompt the user to enter their name, age, and major
    cout << "Please enter your name: ";
    string name;
    cin >> name;
    cout << "Please enter your age: ";
    string age;
    cin >> age;
    cout << "Please enter your major: ";
    string major;
    cin >> major;
    //Write this sentence to file formatted using the user input:
    //  "[name] is [age] and studies [major]"
    out_file << name << " is " << age << " and studies " << major << endl;
    return 0;
}
