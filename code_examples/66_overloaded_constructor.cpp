//Gentry
//November 16, 2021

#include<iostream>
#include<cmath>


using namespace std;

//Create a sturct called Computer with the following members:
//  float processorSpeed
//  int numOfCores
//  int memory
//  int HDgig
//  string graphicCard
//Add a default constructor that takes no parameters

//Add a copy constructor that copies all of the members from another Computer

struct Computer{
    float processorSpeed;
    int numOfCores;
    int memory;
    int HDgig;
    string graphicCard;

    //Add a construcor that allows the user to pass in a value for each member
    Computer(float ps, int nc, int m, int hd, string gc){
        processorSpeed = ps;
        numOfCores = nc;
        memory = m;
        HDgig = hd;
        graphicCard = gc;
    }

    Computer() : Computer(2.0, 4, 4, 128, "none"){}

    Computer(const Computer& c) : Computer(c.processorSpeed, c.numOfCores, c.memory, c.HDgig, c.graphicCard){}
};

int main(int argc, char** argv){
    Computer a;
    Computer b(3.8, 4, 16, 256, "Ryzon 123");
    Computer c(b);

    cout << "Processor: " << c.processorSpeed << endl;
    cout << "Graphics card: " << c.graphicCard << endl;

    return 0;
}



