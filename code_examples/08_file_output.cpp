//Gentry
//August 31 2021

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream file_output;
    //Open the file "Output_08.txt"
    file_output.open("Output_08.txt");
    //Prompt the user to enter their name, age, and major
    string name;
    cout << "What is your name: ";
    cin >> name;
    int age;
    cout << "What is your age: ";
    cin >> age;
    string major;
    cout << "What is your major: ";
    cin >> major;
    //Write this sentence to file formatted using the user input:
    //  "[name] is [age] and studies [major]"
    file_output << name << " is " << age << " and studies " << major;
    return 0;
}
