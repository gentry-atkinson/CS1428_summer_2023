//Gentry
//October 07, 2021

#include<iostream>
#include<cmath>


using namespace std;

//Write a function called isPrime that takes one int as a parameter
//Return true if the int is prime, false otherwise
bool isPrime(int n){
    for(int i = 2; i<sqrt(n)+1; i++){
        if(n%i==0) return false;
    }
    return true;
}

//Write a function called countFromTo that takes 2 ints as parameters
//Print every number from the first int to the second int inclusively
void countFromTo(int from, int to){
    while(from<to){
        cout << from << ' ';
        from++;
    }
    cout << to << endl;
    return;
}

//Write a function called printBetweenPrimes that takes one int as a parameter
//Starting with 2 and 3, print every integer between each two consecutive primes
//Repeat until the bigger of the two primes is bigger than the parameter
//
//Example Output:
//printBetweenPrimes(11)
//2 3
//3 4 5
//5 6 7
//7 8 9 10 11
void printBetweenPrimes(int bound){
    int from = 2, to = 3;
    while(to <= bound){
        countFromTo(from, to);
        from = to;
        do{
            to++;
        }while(!isPrime(to));
    }
}

int main(){
    printBetweenPrimes(100);
    return 0;
}


