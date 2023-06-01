//Gentry
//September 21, 2021

#include<iostream>
#include<cmath>
#include<iomanip>


using namespace std;

int main(){
    //print every whole number for 1 to 100
    //for every number that is divisable by 3, replace the number with "fizz"
    //for every number that is divisable by 5, replace the number with "buzz"
    //for every number that is divisable by 3 and 5, replace the number with "fizz buzz"

    for(int i = 1; i <= 100; i++){
        if (i%15==0) cout << "fizzbuzz" << endl;
        else if (i%3==0) cout << "fizz" << endl;
        else if (i%5==0) cout << "buzz" << endl;
        else cout << i << endl;
    }

    return 0;
}


