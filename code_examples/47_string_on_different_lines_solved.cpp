//Gentry
//October 19, 2021

#include<iostream>


using namespace std;


//Prompt the user to one sentence.
//Print each word of the sentence on its own line.

int main(){
    string sen;
    cout << "Type a sentence: ";
    getline(cin, sen);
    for(int i = 0; i < sen.length();  i++){
        if(sen[i] == ' '){
            cout << endl;
        }
        else{
            cout << sen[i];
        }
    }

    return 0;
}



