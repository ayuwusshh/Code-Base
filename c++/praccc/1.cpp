#include <iostream>
using namespace std;
class Car
{
    string brand;
    string model;
    int year;

public:
    Car()
    {
        brand = "Unknown";
        model = "Unknown";
        year = 0;
    }
    Car(string b, string m, int y)
    {
        brand = b;
        model = m;
        year = y;
    }
    void displayInfo()
    {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};
int main()
{
    Car car1;
    car1.displayInfo();
    Car car2("Toyota", "Corolla", 2020);
    car2.displayInfo();
    return 0;
}
