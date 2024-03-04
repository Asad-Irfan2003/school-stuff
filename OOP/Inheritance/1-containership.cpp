#include <iostream>
using namespace std;

//Containership(Has-a relationship):
//One class containing an object of another class -> Container class


//Container object: object that contains object of another class
//Contained object: The object that is part of another object
//Example 1:
//Computer System has a hard disk
class HardDisk{
    public:

    void show()
    {
        cout<<"HardDisk::show() called"<<endl;
    }

};

class ComputerSystem{ //Container class
    HardDisk hd; //Contained object

    public:
    ComputerSystem()
    {
        hd.show();
    }
};


int main()
{
    ComputerSystem cs; //Container object;
}
