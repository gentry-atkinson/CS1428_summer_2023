//Gentry
//September 21, 2021

#include<iostream>
#include<fstream>


using namespace std;

const string FILENAME = "student_file.txt";

int main(){
    //create a global constant and store in it the string "student_file.txt"
    //open an input filestream using the global constant as the filename
    ifstream fin(FILENAME);
    //Read the file and store the correct values in these variables:
    string firstName, lastName;
    int age;
    string major1, major2;
    float gpa;
    string gradSemester, gradYear;

    string junk;
    fin >> junk >> junk >> junk;
    fin >> junk >> firstName >> lastName;
    fin >> junk >> age >> junk;
    fin >> junk >> major1 >> major2;
    fin >> junk >> gpa;
    fin >> junk >> junk >> gradSemester >> gradYear;

    //print the student's information neatly formatted on the console

    cout << "Student:\t" << firstName << ' ' << lastName << endl;
    cout << "Born:\t\t" << 2021 - age << endl;
    cout << "Major:\t\t" << major1 << ' ' << major2 << endl;
    cout << "GPA:\t\t" << gpa << endl;
    cout << "Graduating:\t" << gradSemester << ' ' << gradYear << endl;


    return 0;
}


