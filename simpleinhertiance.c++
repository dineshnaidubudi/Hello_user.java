#include <iostream>
#include <string>
using namespace std;
class Vehicle {
protected:
    string brand;
    int year;
public:
    Vehicle(string _brand, int _year) : brand(_brand),year(_year) {}
void displayInfo() {
        cout<<"Brand: "<<brand<<endl;
        cout<<"Year: "<<year<<endl;
    }
};
class Car : public Vehicle {
private:
    int numDoors;
public:
    Car(string _brand, int _year, int _numDoors) : Vehicle(_brand, _year), numDoors(_numDoors) {}
void displayInfo() {
        Vehicle::displayInfo();
        cout << "Number of doors: " << numDoors << endl;
    }
};
class Bike : public Vehicle {
private:
    string type;
public:
    Bike(string _brand, int _year, string _type) : Vehicle(_brand, _year), type(_type) {}
        void displayInfo() {
        Vehicle::displayInfo();
        cout << "Type: " << type << endl;
    }
};
int main() {
    Car myCar("Toyota", 2022, 4);
    Bike myBike("Honda", 2020, "Mountain");
    cout << "Car Information:" << endl;
    myCar.displayInfo();
    cout << endl;
    cout << "Bike Information:" << endl;
    myBike.displayInfo();
    return 0;
}
