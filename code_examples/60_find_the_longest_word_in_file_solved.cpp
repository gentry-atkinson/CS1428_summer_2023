//Gentry
//November 09, 2021

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstring>


using namespace std;


//Write a program that prints the longest word in a file. The filename should be
//  passed in as a command line argument.


int main(int argc, char** argv){
    if(argc ==1){
        cout << "I need a file name." << endl;
        return 0;
    }
    else if(argc > 2){
        cout << "File name must be one word." << endl;
        return 0;
    }
    ifstream fin(argv[1]);
    string longestWord = "", thisWord;
    while(!fin.eof()){
            fin >> thisWord;
            if(thisWord.length() > longestWord.length()){
                longestWord = thisWord;
            }
    }
    cout << longestWord << endl;
    return 0;
}



