//Gentry
//October 07, 2021

#include<iostream>


using namespace std;

//Write a function called validGrade. It should take on char paramter. Return
//true if the char is A, B, C, D, or F. Return false otherwise.

//Write a function called enterGrades. It should take two strings as parameters.
//The first string should the name of a file of student names.
//The second file should be the name of a file of student grades.
//Open the names for input, and the grades for output.
//For every name in the name file, prompt the user to enter one grade.
//Use validGrade to validate the input, continue prompting until the grade is valid
//Write grades to the grade file in the same order as the names.

int main(){
    string nameFile = "studentNames.txt", gradeFile = "studentsGrades.txt";
    enterGrades(nameFile, gradeFile);
    return 0;
}


