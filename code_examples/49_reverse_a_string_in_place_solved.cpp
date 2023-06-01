//Gentry
//October 19, 2021

#include<iostream>


using namespace std;


//Write a function to replace a string with its reverse.
void swapString(string& original){
    cout << "Original string: " << original << endl;
    for(int i = 0; i < original.length()/2; i++){
        char temp = original[i];
        original[i] = original[original.length()-i-1];
        original[original.length()-i-1] = temp;
    }
}

int main(){
    string original = "Boko is a bobcat.";
    swapString(original);
    cout << "Original string: " << original << endl;
    return 0;
}



