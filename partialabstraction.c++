#include<iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
    virtual void perimeter() {
        cout << "Base class: Perimeter of shape" << endl;
    }
};

class circle : public Shape {
public:
    void area() {
        cout << "Virtual method: Area of circle" << endl;
    }
    void perimeter() {
        cout << "Derived class: Perimeter of circle" << endl;
    }
};

class rectangle : public Shape {
public:
    void area() {
        cout << "Virtual method: Area of rectangle" << endl;
    }
    void perimeter() {
        cout << "Derived class: Perimeter of rectangle" << endl;
    }
};

int main() {
    rectangle robj;
    robj.area();
    robj.perimeter();
    circle cobj;
    cobj.area();
    cobj.perimeter();

    return 0;
}
