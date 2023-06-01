//Gentry
//November 09, 2021

#include<iostream>
#include<cstdlib>
#include<cstring>


using namespace std;


//create a Student struct with the following members:
//  string name
//  int graduation year
//  float gpa
//  string address

struct Student{
    string name;
    int graduation_year;
    float gpa;
    string address;
};



int main(int argc, char** argv){
    //declare a Student variable and initialize it
    Student s = {"Bob", 2023, 3.7, "123 Real Way San Marcos, TX 78666"};
    return 0;
}



