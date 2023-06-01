//Gentry
//June 3, 2021
//Collaboators: none

#include<iostream>
#include<fstream>
#include<cmath>
#include<ctime>
#include<iomanip>

using namespace std;





int main(){
    char user_input;
    string designerFirstName, designerLastName;
    string shipName;
    float shipMass;
    float engineThrust;
    float acceleration;
    float impulse;
    float maxAlt;
    ofstream fout;
    ifstream fin;

    cout << "Who designed this ship: ";
    cin >> designerFirstName >> designerLastName;
    cout << "What is the name of the ship: ";
    cin >> shipName;
    cout << "What is the mass of the ship: ";
    cin >> shipMass;
    cout << "What is the engine thrust: ";
    cin >> engineThrust;

    fout.open(shipName + ".txt");
    fout << fixed << setprecision(1) << left;
    fout << "##########" << shipName << "##########" << endl;
    fout << endl;
    fout << setw(15) << "Ship Mass:" << shipMass << "kg" << endl;
    acceleration = engineThrust/shipMass;
    fout << setw(15) << "Acceleration:" << acceleration
        << "m/s2" << endl;
    impulse = (9.8 * log(acceleration));
    fout << setw(15) << "Impulse:" << impulse << "Ns/kg" << endl;
    fout << setw(15) << "Max Altitude:" << (100 + (impulse*200))/10.0
        << "km" << endl;
    fout << endl;
    fout << setw(15) << "File Saved at:" << time(NULL) << endl;
    fout << setw(15) << "Designed by:" << designerFirstName << ' '
        << designerLastName << endl;
    fout.close();
    cout << "File written for " << shipName << endl;

    return 0;
}

