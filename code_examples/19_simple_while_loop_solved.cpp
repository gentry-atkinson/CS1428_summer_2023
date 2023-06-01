//Gentry
//September 16, 2021

#include<iostream>

using namespace std;

int main(){
    //Pompt the user to enter two numbers: a and b
    int a, b;
    cout << "Type two numbers: ";
    cin >> a >> b;
    //Use a while loop to print every even number from a to b
    if (a%2==1) a += 1;
    while (a<=b){
        cout << a << endl;
        a += 2;
    }
    return 0;
}


