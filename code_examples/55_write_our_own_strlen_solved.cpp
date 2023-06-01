//Gentry
//November 09, 2021

#include<iostream>


using namespace std;


//Write our own function to measure the length of a c-string
int strlen(char c[]){
    int len = 0;
    while(c[len] != '\0') len++;
    return len;
}


int main(){
    char c_string[] = "CS1428";
    cout << "Length of c_string: " << strlen(c_string) << endl;
    return 0;
}



