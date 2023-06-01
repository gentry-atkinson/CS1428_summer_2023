//Gentry
//September 21, 2021

#include<iostream>
#include<cmath>
#include<iomanip>


using namespace std;

int main(){
    cout << fixed << setprecision(1);

    //convert this while loop to a for loop with the same output
    int powers_of_two = 2;
    while(powers_of_two < 200){
        cout << powers_of_two << '\t' << sqrt(powers_of_two) << endl;
        powers_of_two *= 2;
    }
}


