#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    try
    {

        throw runtime_error("This is an exception!");
    }
    catch (const runtime_error &e)
    {

        cout << "Caught exception: " << e.what() << endl;
    }

    return 0;
}
