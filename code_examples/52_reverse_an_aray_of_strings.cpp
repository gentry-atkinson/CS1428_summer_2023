//Gentry
//October 19, 2021

#include<iostream>


using namespace std;



const int ROWS = 5;

//Write a function to reverse every string in an  array


int main(){
    int a[ROWS] = {
        "Bobcat",
        "LBJ",
        "Alkek",
        "Rocket",
        "alma mater"
    };

    for(int i = 0; i < ROWS; i++){
        cout << a[i] << endl;
    }

    return 0;
}



