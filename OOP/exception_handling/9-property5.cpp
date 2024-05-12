#include <iostream>
using namespace std;

// If any object  is created within try block then the object is first destroyed when an exception is thrown
//then control is tranferred to catch block

// Define a class named Test
class Test {
public:
	// Constructor of Test
	Test() { cout << "Constructor of Test " << endl; }
	// Destructor of Test
	~Test() { cout << "Destructor of Test " << endl; }
};

int main()
{
	try {
		// Create an object of class Test
        Test t1;
		// Throw an integer exception with value 10
		throw 10;
	}
	catch (int i) {
		// Catch and handle the integer exception
		cout << "Caught " << i << endl;
	}
}
