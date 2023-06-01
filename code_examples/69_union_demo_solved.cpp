//Gentry
//November 23, 2021

#include<iostream>
#include<cmath>


using namespace std;

//Create a union called NumberedLetter which can store an int or a char
union NumberedLetter{
    int num;
    char let;
};

int main(int argc, char** argv){
    //Store some values in an array of NumberedLetters
    NumberedLetter stuff[3];
    stuff[0].num = 0;
    stuff[1].num = 1;
    stuff[2].num = 2;
    //Use sizeof to measure the size of the values and of the array
    cout << "Size of the whole array: " << sizeof(stuff) << endl;
    cout << "Size of one letter: " << sizeof(stuff[0].let) << endl;
    cout << "Size of one number: " << sizeof(stuff[0].num) << endl;
    //Try printing addresses to see where different values are stored.
    cout << "Address of the array: " << stuff << endl;
    cout << "Address of the first index: " << &stuff[0] << endl;

    stuff[0].let = 'a';
    stuff[1].let = 'b';
    stuff[2].let = 'c';
    //Use sizeof to measure the size of the values and of the array
    cout << "Size of the whole array: " << sizeof(stuff) << endl;
    cout << "Size of one letter: " << sizeof(stuff[0].let) << endl;
    cout << "Size of one number: " << sizeof(stuff[0].num) << endl;
    //Try printing addresses to see where different values are stored.
    cout << "Address of the array: " << stuff << endl;
    cout << "Address of the first index: " << &stuff[0] << endl;
    return 0;
}
