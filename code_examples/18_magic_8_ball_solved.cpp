//Gentry
//September 14, 2021

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
    //Write a simple "Magic 8-ball program"
    //Instruct the user to speak the question out loud and press any key when
    //  they are done.
    cout << "Say your question out loud. Press any key when you're done...";
    cin.get();

    //Generate a random number from 0 to 7
    srand(time(NULL));
    int option = rand()%8;
    //Use a switch to print a message based on the random number
    switch(option){
    //0     It is certain.
        case 0:
            cout << "0\t\tIt is certain.";
            break;
    //1     Most likely.
        case 1:
            cout << "1\t\tMost likely.";
            break;
    //2     Ask again later.
        case 2:
                cout << "2\t\tAsk again later.";
                break;
    //3     Don't count on it.
        case 3:
            cout << "3\t\tDon't count on it.";
            break;
    //4     Without a doubt
        case 4:
            cout << "4\t\tWithout a doubt.";
            break;
    //5     Yes.
        case 5:
            cout << "5\t\tYes.";
            break;
    //6     Cannot predict now.
        case 6:
            cout << "6\t\tCannot predict now.";
            break;
    //7     Very doubtful
        case 7:
            cout << "7\t\tVery doubtful.";
            break;
        default:
            cout << "Bad number generated." << endl;
    }
    //Print the number and the message with two tabs between them
    return 0;
}


