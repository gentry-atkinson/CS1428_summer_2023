//Gentry
//November 09, 2021

#include<iostream>
#include<cstdlib>
#include<cstring>


using namespace std;


//Write a program that print the longest word from its input list


int main(int argc, char** argv){
    if(argc == 1){
        cout << "type some words" << endl;
        return 0;
    }
    int longestIndex = 1;
    for(int i = 2; i < argc; i++){
        if(strlen(argv[i]) > strlen(argv[longestIndex])){
            longestIndex = i;
        }
    }
    cout << argv[longestIndex] << endl;
    return 0;
}



