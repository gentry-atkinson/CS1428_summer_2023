//Gentry
//September 07, 2021

#include<iostream>

using namespace std;

int main(){
    //Make a word guessing game
    //generate a random number from 1 to 10 using rand()
    string secret_word = "Texas";
    //Prompt the user to enter a word
    cout << "Guess a word: ";
    string guess;
    cin >> guess;
    //if their guess if shorter than the secret word, print "too short"
    if(guess.length() < secret_word.length()){
        cout << "too short" << endl;
    }
    //if their guess if longer than the secret word, print "too long"
    else if(guess.length() > secret_word.length()){
        cout << "too long" << endl;
    }
    //if their guess is the right length but not the right word,
    //  print "right length, wrong word"
    else if(guess != secret_word){
        cout << "right length, wrong word" << endl;
    }
    //if their guess matches the secret word, print "That's it!"
    else{
        cout << "That's it!" << endl;
    }

    return 0;
}


