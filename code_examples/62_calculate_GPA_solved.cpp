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

void calculateGPA(Student& s, const int g[], int SIZE){
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
void calculateGPA(Student& s){
    int SIZE;
    cout << "How many grades: ";
    cin >> SIZE;
    int grades[SIZE];
    for(int i = 0; i < SIZE; i++){
        cout << "Enter one grade: ";
        cin >> grades[i];
    }
    calculateGPA(s, grades, SIZE);
}



