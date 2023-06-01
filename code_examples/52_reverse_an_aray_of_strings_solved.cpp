//Gentry
//October 19, 2021

#include<iostream>


using namespace std;



const int ROWS = 5;

//Write a function to reverse every string in an  array
void reverseStrings(string arr[]){
    for(int i = 0; i < ROWS; i++){
        string newStr = "";
        for(int j = arr[i].length()-1; j>=0; j--){
            newStr += arr[i][j];
        }
        arr[i] = newStr;
    }
    return;
}


int main(){
    string a[ROWS] = {
        "Bobcat",
        "LBJ",
        "Alkek",
        "Rocket",
        "alma mater"
    };

    reverseStrings(a);

    for(int i = 0; i < ROWS; i++){
        cout << a[i] << endl;
    }

    return 0;
}



