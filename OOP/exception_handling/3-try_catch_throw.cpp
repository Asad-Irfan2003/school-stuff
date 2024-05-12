#include <iostream>
#include <stdexcept>

using namespace std;
/*
try block:
the try block encloses the code which may throw an exception

*/

/*
catch block:
block of code which is run which an exception in thrown from a try block
It handles the exception
*/


/*
throw block:
Terminates the function running and starts finding the appropriate catch block to handle the exception
*/
int main() {
    int a, b;
    float div;
    cin >> a;
    cin >> b;
    
    try {
        if (b == 0) {
            throw runtime_error("Division by zero not allowed");
        }
        div = float(a) / b;
        cout << "Result of division: " << div << endl;
    } 
    catch (const runtime_error& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
