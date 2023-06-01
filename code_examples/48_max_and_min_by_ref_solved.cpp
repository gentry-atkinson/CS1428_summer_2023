//Gentry
//October 19, 2021

#include<iostream>


using namespace std;


//Merge these two functions into one using reference parameters

int minOfAandB(int a, int b){
    if(a<b) return a;
    else return b;
}

int maxOfAandB(int a, int b){
    if(a>b)return a;
    else return b;
}

//This function sets a to the minimum value and b to the max
void maxAndMinAB(int& a, int& b){
    if(a>b){
        int temp = a;
        a = b;
        b = temp;
    }
    return;
}

int main(){
    int a=5, b=2;
    maxAndMinAB(a, b);
    cout << "Smaller number: " << a << " Bigger number: " << b << endl;
    return 0;
}



