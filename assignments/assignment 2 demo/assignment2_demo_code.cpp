//Gentry
//September 30, 2021

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
    const float log2 = log(2);
    ofstream fout;
    ifstream fin;
    string ignore;

    do{
        cout << "---Craft Designer Plus---" << endl;
        cout << "D- design a new ship" << endl;
        cout << "T- test a ship" << endl;
        cout << "Q- quit the program" << endl;
        cout << "Enter a menu option: ";
        cin >> user_input;
        switch(user_input){
            case 'd':
            case 'D':
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
                break;
            case 't':
            case 'T':
                cout << "Name of ship to test: ";
                cin >> shipName;
                fin.open(shipName+".txt");
                if(!fin){
                    cout << "Bad ship name." << endl;
                }
                else{
                    fin >> ignore;
                    fin >> ignore >> ignore >> shipMass >> ignore;
                    fin >> ignore >> acceleration >> ignore;
                    fin >> ignore >> impulse >> ignore;
                    fin >> ignore >> ignore >> maxAlt >> ignore;
                    fin >> ignore >> ignore >> ignore >> ignore;
                    fin >> ignore >> ignore >> designerFirstName
                        >> designerLastName;
                    fin.close();
                    cout << "Accel: " << acceleration << endl;
                    cout << "Impulse: " << impulse << endl;
                    cout << "Max alt: " << maxAlt << endl;
                    cout << "Designer: " << designerFirstName
                        << " " << designerLastName << endl;
                    if(designerFirstName == "Thomas" &&
                        designerLastName == "Harris")
                        cout << shipName << " has failed test number 1" << endl;
                    else if(shipMass >= 1000)
                        cout << shipName << " has failed test number 2" << endl;
                    else if(acceleration <= 1 || acceleration >= 10 )
                        cout << shipName << " has failed test number 3" << endl;
                    else if(impulse<10)
                        cout << shipName << " has failed test number 4" << endl;
                    else if(shipMass < 100 && maxAlt < 150)
                        cout << shipName << " has failed test number 5" << endl;
                    else if(shipMass >= 100 && maxAlt < 200)
                        cout << shipName << " has failed test number 5" << endl;
                    else
                        cout << shipName << " has passed all tests" << endl;
                }
                break;
            case 'q':
            case 'Q':
                cout << "Thank you for using Craft Designer Plus" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }while(user_input != 'q' && user_input != 'Q');
}

