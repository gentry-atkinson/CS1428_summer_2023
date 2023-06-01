//Gentry
//August 31 2021

#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

int main(){
    //Open the file "Numbers_09.txt" for input
    ifstream in("Numbers_09.txt");
    //Open the file "Output_09.txt" for output
    ofstream out("Output_09.txt");
    //Read two numbers from the Numbers file: a and b
    int a, b;
    in >> a >> b;
    //Compute a to the power of b
    //Write the resutl to the Output file
    out << pow(a,b) << endl;
    return 0;
}
