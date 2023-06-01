//Gentry
//October 07, 2021

#include<iostream>
#include<fstream>


using namespace std;

//Write a function called validGrade. It should take on char paramter. Return
//true if the char is A, B, C, D, or F. Return false otherwise.
bool validGrade(char g){
    switch(g){
        case 'a':
        case 'A':
        case 'b':
        case 'B':
        case 'c':
        case 'C':
        case 'd':
        case 'D':
        case 'f':
        case 'F':
            return true;
        default:
            return false;
    }
}


//Write a function called enterGrades. It should take two strings as parameters.
//The first string should the name of a file of student names.
//The second file should be the name of a file of student grades.
//Open the names for input, and the grades for output.
//For every name in the name file, prompt the user to enter one grade.
//Use validGrade to validate the input, continue prompting until the grade is valid
//Write grades to the grade file in the same order as the names.

void enterGrades(string names, string grades){
    ifstream nin(names);
    ofstream gout(grades);
    if(!nin or !gout){
        cout << "File failed" << endl;
    }
    while(!nin.eof()){
        string n;
        char g;
        getline(nin, n);
        if(n == "") break;
        do{
            cout << "Enter a grade for " << n << ": ";
            cin >> g;
        }while(!validGrade(g));
        gout << g << endl;
    }
    return;
}

int main(){
    string nameFile = "studentNames.txt", gradeFile = "studentsGrades.txt";
    enterGrades(nameFile, gradeFile);
    return 0;
}


