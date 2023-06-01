//Gentry
//October 19, 2021

#include<iostream>


using namespace std;


//Prompt the user to enter two c++ strings
//Print every character in the first string where the second string is
//  different

int main(){
    string first, second;
    cout << "Type one word: ";
    cin >> first;
    cout << "Type a different word: ";
    cin >> second;
    int f_len = first.length(), s_len = second.length();
    for(int i = 0; i < f_len && i < s_len; i++){
        if(first[i] != second[i]){
            cout << first[i];
        }
    }
    for(int i = s_len; i < f_len; i++){
        cout << first[i];
    }
    cout << endl;
    return 0;
}



