#include<iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class circle : public Shape {
public:
    void area() {
        cout << "Area of circle" << endl;
    }
};

class rectangle : public Shape {
public:
    void area() {
        cout << "Area of rectangle" << endl;
    }
};

int main() {
    Shape *shape1 = new rectangle();
    shape1->area();
    delete shape1;

    Shape *shape2 = new circle();
    shape2->area();
    delete shape2;

    return 0;
}
