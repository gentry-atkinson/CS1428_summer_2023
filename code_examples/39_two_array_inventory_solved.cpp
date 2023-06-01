//Gentry
//October 19, 2021

#include<iostream>
#include<fstream>


using namespace std;

//Read the inventory items out of "shop_inventory.txt" and store the names and
//  prices in two separate array.

//Let the user type the name of an item. Display it's price if it in the
//  inventory. Othoerwise print "Not in inventory."

int main(){
    ifstream inv("shop_inventory.txt");
    int shopSize;
    inv >> shopSize;
    string names[shopSize];
    float prices[shopSize];

    for(int i=0; i<shopSize; i++){
        inv >> names[i];
        inv >> prices[i];
    }

    string searchItem;
    cout << "What would you like to know the price of: ";
    cin >> searchItem;
    int searchIndex = -1;
    for(int i = 0; i<shopSize; i++){
        if(names[i]==searchItem){
            searchIndex = i;
            break;
        }
    }
    if(searchIndex == -1)
        cout << "Not in inventory." << endl;
    else
        cout << "That item costs $" << prices[searchIndex] << endl;

    return 0;
}



