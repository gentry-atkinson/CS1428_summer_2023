//Gentry
//August 31 2021

#include<iostream>

using namespace std;

int main(){
    //Prompt the user to enter their 3 favorite ice cream flavors
    cout << "Please enter your 3 favorite flavors of ice cream: ";
    string flavor1, flavor2, flavor3;
    cin >> flavor1 >> flavor2 >> flavor3;
    //Print a list of the 3 flavors

    cout << "Your 3 favorite ice cream flavors are: " << endl;
    cout << "1) " << flavor1<<endl;
    cout << "2) " << flavor2<<endl;
    cout << "3) " << flavor3<<endl;

    return 0;
}
