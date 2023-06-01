//Gentry
//August 31 2021

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    //Open the file "Sample_07.txt"
    ifstream in_file("Sample_07.txt");
    //Read 4 numbers from the file stream
    int a, b, c, d;
    in_file >> a >> b >> c >> d;
    //Print the product of the 4 numbers on the console
    cout << "Product: " << a*b*c*d << endl;
    return 0;
}
