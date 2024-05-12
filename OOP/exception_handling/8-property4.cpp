//Property 4
//Try blocks can be nested

// C++ program to demonstrate try/catch blocks can be nested
#include <iostream>
using namespace std;

int main()
{

	// nesting of try/catch
	try {
		try {
			throw 20;
		}
		catch (int n) {
			cout << "Handle Partially ";
			throw; // Re-throwing an exception
		}
	}
	catch (int n) {
		cout << "Handle remaining ";
	}
	return 0;
}
