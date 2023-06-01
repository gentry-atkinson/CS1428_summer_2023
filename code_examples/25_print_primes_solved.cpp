//Gentry
//September 21, 2021

#include<iostream>
#include<cmath>


using namespace std;

int main(){
    //print every prime number from 1 to 100 inclusively
    for(int i = 2; i <= 100; i++){
        bool prime = true;
        for(int divisor = 2; divisor <= sqrt(i); divisor++){
            if(i%divisor==0){
                prime = false;
                break;
            }
        }
        if(prime) cout << i << endl;
    }
    return 0;
}


