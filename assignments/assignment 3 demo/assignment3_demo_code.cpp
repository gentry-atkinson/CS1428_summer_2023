//Gentry
//November 04, 2021
//Collaborators: none
//Start time: 12:39
//Finish time: 12:54

#include<iostream>
#include<fstream>
#include<cmath>
#include<ctime>
#include<iomanip>

using namespace std;

//Design Ship
//Write one ship file from user input
//Parameters: none
//Returns: nothing
//Side Effects: writes on file [ship name].txt
void designShip();

//Test a Ship
//Compare ship values to test values and print result
//Parameters: none
//Returns: nothing
//Side Effects: writes test results to console
void testShip();

//Simulate Flight
//Print the altitude and speed of a rocket with a given acceleration
//Parameters: none
//Returns: nothing
//Side Effects: writes flight values to console
void simFlight();

int main(){
    char user_input;

    do{
        cout << "---Craft Designer Plus---" << endl;
        cout << "D- design a new ship" << endl;
        cout << "T- test a ship" << endl;
        cout << "S- simulate a flight" << endl;
        cout << "Q- quit the program" << endl;
        cout << "Enter a menu option: ";
        cin >> user_input;
        switch(user_input){
            case 'd':
            case 'D':
                designShip();
                break;
            case 't':
            case 'T':
                testShip();
                break;
            case 'q':
            case 'Q':
                cout << "Thank you for using Craft Designer Plus" << endl;
                break;
            case 's':
            case 'S':
                simFlight();
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }while(user_input != 'q' && user_input != 'Q');
}

void designShip(){
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
    return;
}

void testShip(){
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
    return;
}

void simFlight(){
    cout << "///////////////Rocket Simulation///////////////" << endl;
    cout << "How fast is the rocket accelerating in m/s^2: ";
    float acc;
    cin >> acc;
    cout << "How many seconds to simulate: ";
    int sec;
    cin >> sec;
    float speed = 0.0, alt = 0.0;
    cout << endl;
    for(int i = 0; i<=sec; i++){
        speed = acc*i;
        alt = 0.5 * acc * (i*i);
        cout << "At " << right << setw(3) << i  << " seconds:\t";
        cout << fixed << setprecision(1);
        cout << setw(6) << right << speed << setw(10) << left << "m/s";
        if(alt < 1000)
            cout << alt << "m" << endl;
        else
            cout <<  alt/1000.0 << "km" << endl;
    }
}

