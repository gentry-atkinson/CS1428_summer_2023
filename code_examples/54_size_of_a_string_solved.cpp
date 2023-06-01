//Gentry
//November 09, 2021

#include<iostream>
#include<cstring>


using namespace std;


//Measure the size of a c-string compare to a c++-string

int main(){
    string cpp_string = "Boko";
    char c_string[] = "Boko";

    cout << "Length of C string: " << strlen(c_string) << endl;
    cout << "Length of C++ string: " << cpp_string.length() << endl;

    cout << "Size of C string: " << sizeof(c_string) << endl;
    cout << "Size of C++ string: " << sizeof(cpp_string) << endl;

    return 0;
}



