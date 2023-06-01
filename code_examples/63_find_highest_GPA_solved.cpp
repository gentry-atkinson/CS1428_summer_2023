//Gentry
//November 16, 2021

#include<iostream>
#include<cstdlib>
#include<cstring>


using namespace std;


//Write a function called findHighestGPA
//The function should take an array of Students as a parameter
//Return the index of the student with the highest grade

struct Student{
    string name;
    int grad_year;
    float gpa;
    string address;
};


void calculateGPA(Student& s, const float g[], const int SIZE){
    float gpa_sum = 0.0;
    for(int i = 0; i < SIZE; i++){
        if(g[i] >= 90)
            gpa_sum += 4.0;
        else if(g[i] >= 80)
            gpa_sum += 3.0;
        else if(g[i] >= 70)
            gpa_sum += 2.0;
        else if(g[i] >= 60)
            gpa_sum += 1.0;
    }
    s.gpa = gpa_sum/SIZE;
}

int findHighestGPA(const Student all_students[] , int SIZE){
    int highestIndex = 0;
    for(int i = 1; i < SIZE; i++){
        if(all_students[i].gpa > all_students[highestIndex].gpa){
            highestIndex = i;
        }
    }
    return highestIndex;
}

int main(int argc, char** argv){
    const int CLASS_SIZE = 3, NUM_GRADES = 3;
    Student all_students[CLASS_SIZE];

    all_students[0].name = "Doretta";
    float grades0[] = {96.7, 93.2, 94.1};
    calculateGPA(all_students[0], grades0, NUM_GRADES);

    all_students[1].name = "Pierre";
    float grades1[] = {91.5, 83.7, 94.9};
    calculateGPA(all_students[1], grades1, NUM_GRADES);

    all_students[2].name = "Quinlan";
    float grades2[] = {95.8, 94.1, 90.3};
    calculateGPA(all_students[2], grades2, NUM_GRADES);

    int highestGPA = findHighestGPA(all_students, CLASS_SIZE);

    cout << all_students[highestGPA].name << " has the highest GPA." << endl;
}



