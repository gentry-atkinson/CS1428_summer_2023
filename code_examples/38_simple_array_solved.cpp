//Gentry
//October 19, 2021

#include<iostream>
#include<iomanip>


using namespace std;

//Prompt the user to enter 5 plant names
//Store the names in an array
//Print all 5 in a neatly formatted table

int main(){
    string names[5];
    for(int i = 0; i < 5; i++){
        cout << "Enter the name of one plant: ";
        cin >> names[i];
    }
    cout << "--------------" << endl;
    cout << "|Number  Name|"<<endl;
    cout << "--------------" << endl;
    for(int i = 0; i < 5; i++){
        cout << "|    " << left << setw(5) << i << names[i] << endl;
        cout << "--------------" << endl;
    }
    return 0;
}



