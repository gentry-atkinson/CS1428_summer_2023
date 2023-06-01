//Gentry
//October 07, 2021

#include<iostream>
#include<fstream>


using namespace std;

//Add to Roster
//Parameters:
//  sName: the name of one student
//Returns: nothing
//Side Effects: write the students name to the file "1428_roster.txt". Every
//  student should be assigned a unique student number in ascending order.
void addToRoster(string sName){
    static int sNum = 1000;
    ofstream file("1428_roster.txt", ios_base::app);
    file << sNum << '\t' << sName << endl;
    sNum++;
}


int main(){
    addToRoster("Rita Shelton");
    addToRoster("Israel Burgess");
    addToRoster("Bernard Gordon ");
    return 0;
}


