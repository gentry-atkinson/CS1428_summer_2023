//Gentry
//October 19, 2021

#include<iostream>
#include<fstream>


using namespace std;

//Prompt the user to enter 10 integers
//Print the mean and mode
//  Mean -> the sum divided by the number of values
//  Mode -> the most common value

int main(){
    const int SIZE = 10;
    int numbers[10];
    cout << "Type 10 integers: " << endl;
    for(int i = 0; i<SIZE; i++)
        cin >> numbers[i];

    int counts[10];
    int sum = 0;
    for(int i = 0; i<SIZE; i++){
        int c = 0;
        sum += numbers[i];
        for(int j = 0; j<SIZE; j++){
            if (numbers[j] == numbers[i]) c++;
        }
        counts[i] = c;
    }

    int biggestCount = 0;
    for(int i = 1; i<SIZE; i++){
        if(counts[i] > counts[biggestCount]){
            biggestCount = i;
        }
    }
    cout << "Mean: " << sum/10.0 << endl;
    cout << "Mode: " << numbers[biggestCount] << endl;

    return 0;
}



