//Gentry
//September 07, 2021

#include<iostream>

using namespace std;

int main(){
    //Prompt the user to enter their name
    string name;
    cout << "What is your name: ";
    cin >> name;
    //If the users name is alphabetically before "M", print "Group 1"
    if (name < "M"){
        cout << "Group 1" << endl;
    }
    //Else print "Group 2"
    else{
        cout << "Group 2" << endl;
    }
    return 0;
}


