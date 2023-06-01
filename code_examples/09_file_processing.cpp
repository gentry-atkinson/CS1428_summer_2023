//Gentry
//August 31 2021

#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

int main(){
    //Open the file "Numbers_09.txt" for input
    ifstream in_file;
    in_file.open("Numbers_09.txt");
    //Open the file "Output_09.txt" for output
    ofstream fout;
    fout.open("Output_09.txt");
    //Read two numbers from the Numbers file: a and b
    int a, b;
    in_file >> a >> b;
    //Compute a to the power of b
    int result = pow(a, b);
    //Write the resutl to the Output file
    fout << result << endl;
    return 0;
}
