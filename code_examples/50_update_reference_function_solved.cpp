//Gentry
//October 19, 2021

#include<iostream>


using namespace std;


//Write a by reference function to update i in the main function so that the for
//  loop only prints even numbers.
void updateI(int& i){
    i += 2;
    return;
}

int main(){
    cout << "All even numbers 1-100" << endl;
    for(int i = 2; i <=100; updateI(i)){
        cout << i << ", ";
        if(i%10==0) cout << endl;
    }
    return 0;
}



