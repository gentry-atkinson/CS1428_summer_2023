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
    int grad_year;
    float gpa;
    string address;
};


int main(int argc, char** argv){
    //declare a Student variable and initialize it
    Student newStudent;
    newStudent.name = "Bob";
    newStudent.grad_year = 2022;
    newStudent.gpa = 3.5;
    newStudent.address = "1223 Lazy Dr.";
    return 0;
}



