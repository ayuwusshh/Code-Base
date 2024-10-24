#include <iostream>
#include <stdexcept>

using namespace std;

void foo() {
    try {
        throw runtime_error("Exception from foo()");
    }
    catch (const exception& e) {
        cout << "Exception caught in foo(): " << e.what() << endl;
        throw;
    }
}

int main() {
    try {
        foo();
    }
    catch (const exception& e) {
        cout << "Exception caught in main(): " << e.what() << endl;
    }

    return 0;
}
