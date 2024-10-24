#include <iostream>

using namespace std;

int main() {
    try {
        int  numerator = 10;
        int denominator = 0;
        int result = numerator / denominator;
    }
    catch (const char* error) {
        cout << "Caught exception: " << error << endl;
    }
    catch (const std::exception& e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    catch (...) {
        cout <<"i'm chammar" << endl;
    }

    return 0;
}
