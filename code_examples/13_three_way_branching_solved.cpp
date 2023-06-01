//Gentry
//September 07, 2021

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    //Make a number guessing game
    //generate a random number from 1 to 10 using rand()
    int secret = rand()%10;
    //Prompt the user to enter an integer
    int guess;
    cin >> guess;
    //if the guess is smaller than the random number, print "too small"
    if (guess < small){
        cout << "too small" << endl;
    }
    //if the guess is bigger than the random number, print "too big"
    else if (guess > small){
        cout << "too big" << endl;
    }
    //if the guess is exactly the random number, print "That's it!"
    else{
        cout << "That's it!" << endl;
    }
    return 0;
}


