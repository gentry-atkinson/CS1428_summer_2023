//Gentry
//September 07, 2021

#include<iostream>

using namespace std;

int main(){
    //Make a word guessing game
    string secret_word = "Texas";
    //Prompt the user to enter a word
    string user_input;
    cout << "Guess a word: ";
    cin >> user_input;
    //if their guess if shorter than the secret word, print "too short"
    if (user_input.length() < secret_word.length())cout << "too short";
    //if their guess if longer than the secret word, print "too long"
    else if (user_input.length() > secret_word.length())cout << "too long";
    //if their guess is the right length but not the right word,
    //  print "right length, wrong word"
    else if (user_input != secret_word) cout << "right length, wrong word";
    //if their guess matches the secret word, print "That's it!"
    else cout << "That's it!";

    return 0;
}


