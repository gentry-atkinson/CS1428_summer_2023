//Gentry
//October 19, 2021

#include<iostream>
#include <string>


using namespace std;


//Prompt the user to enter one addition operation as a string
//Computer the value of the operation
//Example:
// 4+51
// 55
int main(){
    string op;
    cout << "Type an addition operation: ";
    cin >> op;
    int op1=0, op2=0, counter = 0;
    while(op[counter] != '+'){
        counter++;
    }
    op1 = stoi(op.substr(0, counter));
    op2 = stoi(op.substr(counter+1, op.length()-counter));
    cout << op1+op2 << endl;
    return 0;
}



