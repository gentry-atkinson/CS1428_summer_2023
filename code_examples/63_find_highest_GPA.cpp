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

//Write a function called findHighestGPA
//The function should take an array of Students as a parameter
//Return the index of the student with the highest grade

int findHighestGPA(const Student s[], const int siz){
    int highestIndex = 0;
    for(int i = 1; i < siz; i++){
        if(s[i].gpa > s[highestIndex].gpa){
            highestIndex = i;
        }
    }
    return highestIndex;
}

void calculateGPA(Student& s, const float grades[], int siz){
    s.gpa = 0.0;
    for(int i = 0; i < siz; i++){
        if (grades[i] >= 90)
            s.gpa += 4.0;
        else if (grades[i] >= 80)
            s.gpa += 3.0;
        else if (grades[i] >= 70)
            s.gpa += 2.0;
        else if (grades[i] >= 60)
            s.gpa += 1.0;
    }
    s.gpa /= siz;
}

int main(int argc, char** argv){
    const int CLASS_SIZE = 3, NUM_GRADES = 3;
    Student all_students[CLASS_SIZE];
    float grades[][NUM_GRADES] = {
        {86.7, 93.2, 94.1},
        {91.5, 83.7, 94.9},
        {95.8, 94.1, 90.3}
    };

    all_students[0].name = "Doretta";
    calculateGPA(all_students[0], grades[0], NUM_GRADES);

    all_students[1].name = "Pierre";
    calculateGPA(all_students[1], grades[1], NUM_GRADES);

    all_students[2].name = "Quinlan";
    calculateGPA(all_students[2], grades[2], NUM_GRADES);

    int highestStudent = findHighestGPA(all_students, CLASS_SIZE);
    cout << "Highest GPA is " << all_students[highestStudent].name << endl;
}



