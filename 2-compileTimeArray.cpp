#include <iostream>
using namespace std;

class employee{
    int id;
    public:
    employee(){
        id=1;
    }
    int get_id()
    {
        return id;
    }
    employee(int id):id(id){}
};

int main()
{
    //Using default Constructor
    employee e1[10];

    //Using parameterized Constructor(Explicitly)
    employee e2[3]={employee(11),employee(12),employee(13)};
    for(int i=0;i<3;i++)
    {
        cout<<e2[i].get_id()<<endl;
    }
}