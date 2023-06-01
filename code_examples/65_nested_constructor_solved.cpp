//Gentry
//November 16, 2021

#include<iostream>
#include<cmath>


using namespace std;

//Create a Point struct that stores to floating point values X and Y
//Give Point a constructor that prompts the user to enter values for X and Y
struct Point{
    float x;
    float y;
    Point(){
        cout << "Enter the x y coordinates: ";
        cin >> x >> y;
    }
};


//Create a Line struct the has two Points start and finish
//Give Line a constructor that calculates the length of the line

struct Line{
    Point start;
    Point finish;
    float len;
    Line(){
        len = sqrt(pow(start.x-finish.x, 2) + pow(start.y-finish.y, 2));
    }
};

int main(int argc, char** argv){
    Line l;
    cout << "This line is " << l.len << " units long." << endl;
    return 0;
}



