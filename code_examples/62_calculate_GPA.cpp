//Gentry
//November 16, 2021

#include<iostream>
#include<cstdlib>
#include<cstring>


using namespace std;

struct Student{
    string name;
    int grad_year;
    float gpa;
    string address;
};

//Write an overloaded function calculateGPA using these prototypes:

void calculateGPA(Student&, const int[], int);
void calculateGPA(Student&);


int main(int argc, char** argv){
    Student bob = {"Bob", 2022, 0.0, "1445 Windy Ln."};
    calculateGPA(bob);
    cout << "The GPA of " << bob.name << " is " << bob.gpa << endl;
    return 0;
}




