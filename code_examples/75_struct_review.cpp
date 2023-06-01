//Gentry
//December 02, 2021

#include<iostream>
#include<cmath>


using namespace std;

//Create a struct called Point that has two members: float x and float y
//Add a constructor that lets the user pass in values for x and y

//Implement this function:

//Return the index of the Point in the array that is closest to p
int findClosest(const Point& p, const Point pointList[], int listSize);


int main(int argc, char** argv){
    Point pl[6] = {Point(3.4, 4.5), Point(1.2, 8.9), Point(4.5, 3.7),
        Point(2.2, 4.6), Point(3.6, 2.1), Point(8.9, 9.2)};

    Point p(4.9, 6.2);

    int closest = findClosest(p, pl, 6);
    cout << "The closest point to (4.9, 6.2) is (" << pl[closest].x
        << ", " << pl[closest].y << ")." << endl;;

    return 0;
}



