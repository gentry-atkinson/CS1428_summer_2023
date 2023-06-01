//Gentry
//September 07, 2021

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(time(NULL));
    //Make a number guessing game
    //generate a random number from 1 to 10 using rand()
    int secret_number = (rand()%10)+1;
    //Prompt the user to enter an integer
    cout << "Guess a number: ";
    int user_input;
    cin >> user_input;
    //if the guess is smaller than the random number, print "too small"
    if (user_input < secret_number) cout << "too small" << endl;
    //if the guess is bigger than the random number, print "too big"
    else if (user_input > secret_number) cout << "too big" << endl;
    //if the guess is exactly the random number, print "That's it!"
    else cout << "That's it!" << endl;

    return 0;
}


