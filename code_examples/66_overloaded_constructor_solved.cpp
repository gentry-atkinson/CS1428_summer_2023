//Gentry
//November 16, 2021

#include<iostream>
#include<cmath>


using namespace std;

//Create a sturct call Computer with the following members:
//  float processorSpeed
//  int numOfCores
//  int memory
//  int HDgig
//  string graphicCard
//Add a default constructor that takes no parameters
//Add a construcor that allows the user to pass in a value for each member
//Add a copy constructor that copies all of the members from another Computer

struct Computer{
      float processorSpeed;
      int numOfCores;
      int memory;
      int HDgig;
      string graphicCard;
      Computer(){
        cout << "How fast is the processor: ";
        cin >> processorSpeed;
        cout << "How many cores: ";
        cin >> numOfCores;
        cout << "How much RAM: ";
        cin >> memory;
        cout << "How big is the drive: ";
        cin >> HDgig;
        cout << "What graphics card: ";
        getline(cin, graphicCard);
      }
      Computer(float ps, int nc, int m,  int hg, string gc){
        processorSpeed = ps;
        numOfCores = nc;
        memory = m;
        HDgig = hg;
        graphicCard = gc;
      }
      Computer(const Computer& c){
        processorSpeed = c.processorSpeed;
        numOfCores = c.numOfCores;
        memory = c.memory;
        HDgig = c.HDgig;
        graphicCard = c.graphicCard;
      }
};

int main(int argc, char** argv){
    Computer a;
    Computer b(3.8, 4, 16, 256, "Ryzon 123");
    Computer c(b);
    return 0;
}



