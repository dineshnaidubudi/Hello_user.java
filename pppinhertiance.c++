#include <iostream>
using namespace std;
class Base {
public:
    void display() {
        cout << "Base class" << endl;
    }
};
class PrivateDerived : private Base {
public:
    void displayPrivate() {
        display();
        cout << "Private Derived class" << endl;
    }
};
class ProtectedDerived : protected Base {
public:
    void displayProtected() {
        display();
        cout << "Protected Derived class" << endl;
    }
};
class PublicDerived : public Base {
public:
    void displayPublic() {
        display();
        cout << "Public Derived class" << endl;
    }
};

int main() {
    PrivateDerived privateObj;
    ProtectedDerived protectedObj;
    PublicDerived publicObj;
    privateObj.displayPrivate();
    protectedObj.displayProtected();
    publicObj.display();
    publicObj.displayPublic();
    return 0;
}
