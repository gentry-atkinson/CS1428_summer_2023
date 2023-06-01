//Gentry
//October 19, 2021

#include<iostream>
#include<fstream>


using namespace std;

//Read the inventory items out of "shop_inventory.txt" and store the names and
//  prices in a single 2D array.

//Let the user type the name of an item. Print a neatly formatted price tage if
//  the item is in the shop. Othoerwise print "Not in inventory."

const int NAME = 0;
const int PRICE = 1;

int main(){
    int SIZE;
    ifstream invFile("shop_inventory.txt");
    invFile >> SIZE;
    string inventory[SIZE][2];
    for(int i = 0; i < SIZE; i++){
        invFile >> inventory[i][NAME];
        invFile >> inventory[i][PRICE];
    }

    string targetItem;
    cout << "Name an item: ";
    cin >> targetItem;

    for(int i = 0; i < SIZE; i++){
        if(inventory[i][NAME] == targetItem){
            cout << " --------------------- " << endl;
            cout << "| " << inventory[i][NAME] << '\t' << inventory[i][PRICE]
                << " |" <<  endl;
            cout << " --------------------- " << endl;
            return 0;
        }
    }
    cout << "Not in inventory" << endl;

    return 0;
}



