//Gentry
//November 16, 2021

#include<iostream>
#include<cmath>


using namespace std;

//Create a Point struct that stores to floating point values X and Y
//Give Point a constructor that prompts the user to enter values for X and Y
struct Point{
    float x, y;
    Point(){
        cout << "X: ";
        cin >> x;
        cout << "Y: ";
        cin >> y;
    }
};


//Create a Line struct the has two Points start and finish
//Give Line a constructor that calculates the length of the line
struct Line{
    Point start, finish;
    float len;
    Line(){
        //sqrt((x1 - x2)^2 + (y1-y2)^2)) = len
        len = sqrt(pow((finish.x - start.x), 2) + pow((finish.y - start.y), 2));
    }
};


int main(int argc, char** argv){
    Line l;
    cout << "This line is " << l.len << " units long." << endl;
    return 0;
}



