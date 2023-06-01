//Gentry
//November 16, 2021

#include<iostream>
#include<cstdlib>
#include<cstring>


using namespace std;

//Create a struct called Car with a constructor that allows the user to enter
//  a value for each data member. The constructor check that the user's inputs
//  are valid.
//These are the valid ranges for each member:
//  make : string length gretaer than 0
//  model : string length greater than 0
//  year : greater than 1900, less that 2023
//  milage : greater than 0
//  msrp : greater than 0

struct Car{
    string make;
    string model;
    int year;
    float milage;
    float msrp;
    Car(){

        do{
            cout << "What is the make of the car: ";
            cin >> make;
        }while(make.length() == 0);

        do{
            cout << "What is the model of the car: ";
            cin >> model;
        }while(model.length() == 0);

        do{
            cout << "Year of manufacture: ";
            cin >> year;
        }while(year <= 1900 || year >= 2023);

        do{
            cout << "Milage: ";
            cin >> milage;
        }while(milage <= 0);

        do{
            cout << "Cost: ";
            cin >> msrp;
        }while(msrp <= 0);
    }
};

int main(int argc, char** argv){
    Car car1;
    cout << "The " << car1.year << " " << car1.make << " " << car1.model
        << " costs $" << car1.msrp << endl;
    return 0;
}



