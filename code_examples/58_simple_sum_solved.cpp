//Gentry
//November 09, 2021

#include<iostream>
#include<cstdlib>


using namespace std;


//Write a program that will add up any list of numbers from the command line


int main(int argc, char** argv){
    if (argc == 1){
        cout << "You must type some numbers." << endl;
        return 0;
    }
    int sum = 0;
    for(int i = 1; i < argc; i++){
        sum += atoi(argv[i]);
    }
    cout << sum << endl;
    return 0;
}



