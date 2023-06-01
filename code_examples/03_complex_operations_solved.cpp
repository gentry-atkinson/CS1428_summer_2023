//Gentry
//August 26

#include<iostream>

using namespace std;

int main(){
    //Save the value 43.4 in a float named a
    float a = 43.4;

    //Save the value 5 more than twice a in a float named b
    float b = 2*a + 5;

    //Save a third of 7 less than b in a float named c
    float c = (b-7)/3;

    //Save c squared times 1.5 in a float named d
    float d = 1.5 * (c*c);

    //Save d divided by a with b added to the result in a float named e
    float e = d/a + b;

    //Save e divided by the quantity 9/10 in a float named f
    float f = e / (9.0/10.0);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;
    cout << "f: " << f << endl;

    return 0;
}
