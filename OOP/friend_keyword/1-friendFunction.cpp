#include <iostream>
using namespace std;
/*
Friend function: a function which can access a private or protected method and attribute of a class
*/

class Distance
{
    int metre;

public:
    friend int add5(Distance &d);
    Distance() : metre(0) {}
    friend ostream &operator<<(ostream &output, const Distance &d)
    {
        output << d.metre << endl;
        return output;
    }
};

int add5(Distance &d)
{
    d.metre += 5;
    return d.metre;
}
class classB;

class classA
{
    int num;

public:
    classA() : num(12) {}

    friend int add(classA, classB);
};
class classB
{
    int numB;

public:
    classB() : numB(1) {}

    friend int add(classA, classB);
};
int add(classA objectA, classB objectB)
{
    return (objectA.num + objectB.numB);
}
int main()
{
    Distance d;
    cout << d << endl;
    add5(d);
    cout << d << endl;
    classA a;
    classB b;
    int sum = add(a, b);
    cout << "sum:" << sum << endl;
}
