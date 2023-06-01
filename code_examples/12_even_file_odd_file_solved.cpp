//Gentry
//September 07, 2021

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string even_name, odd_name;
    //Prompt the user to type a filename for even numbers
    cout << "What should I call the even file: ";
    cin >> even_name;
    //Prompt the user to type a filename for odd numbers
    cout << "What should I call the odd file: ";
    cin >> odd_name;
    //Open two filestreams using the file names with ".txt" added to the end
    ofstream even_file(even_name+".txt");
    ofstream odd_file(odd_name+".txt");
    //Prompt the user to enter 5 integers
    int input1, input2, input3, input4, input5;
    cout << "Number 1: ";
    cin >> input1;
    cout << "Number 2: ";
    cin >> input2;
    cout << "Number 3: ";
    cin >> input3;
    cout << "Number 4: ";
    cin >> input4;
    cout << "Number 5: ";
    cin >> input5;
    //Write every even number to the even file
    //Write every odd number to the odd file
    if(input1%2 == 0) even_file << input1 << endl;
    else odd_file << input1 << endl;
    if(input2%2 == 0) even_file << input2 << endl;
    else odd_file << input2 << endl;
    if(input3%2 == 0) even_file << input3 << endl;
    else odd_file << input3 << endl;
    if(input4%2 == 0) even_file << input4 << endl;
    else odd_file << input4 << endl;
    if(input5%2 == 0) even_file << input5 << endl;
    else odd_file << input5 << endl;
    //Close both file streams
    even_file.close();
    odd_file.close();
    return 0;
}


