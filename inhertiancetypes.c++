#include <iostream>
using namespace std;
class Base {
public:
    void displayBase() {
        cout << "Base class" << endl;
    }
};
class Derived : public Base {
public:
    void displayDerived() {
        cout << "Derived class" << endl;
    }
};
class DerivedMultiple : public Base {
public:
    void displayDerivedMultiple() {
        cout << "Derived Multiple class" << endl;
    }
};
class DerivedMultiLevel : public Derived {
public:
    void displayDerivedMultiLevel() {
        cout << "Derived MultiLevel class" << endl;
    }
};
class DerivedHierarchical1 : public Base {
public:
    void displayDerivedHierarchical1() {
        cout << "Derived Hierarchical 1 class" << endl;
    }
};
class DerivedHierarchical2 : public Base {
public:
    void displayDerivedHierarchical2() {
        cout << "Derived Hierarchical 2 class" << endl;
    }
};
int main() {
    Derived derivedObj;
    derivedObj.displayBase();
    derivedObj.displayDerived();
    DerivedMultiple derivedMultiObj;
    derivedMultiObj.displayBase();
    derivedMultiObj.displayDerivedMultiple();
    DerivedMultiLevel derivedMultiLevelObj;
    derivedMultiLevelObj.displayBase();
    derivedMultiLevelObj.displayDerived();
    derivedMultiLevelObj.displayDerivedMultiLevel();
    DerivedHierarchical1 derivedHierarchical1Obj;
    derivedHierarchical1Obj.displayBase();
    derivedHierarchical1Obj.displayDerivedHierarchical1();
    DerivedHierarchical2 derivedHierarchical2Obj;
    derivedHierarchical2Obj.displayBase();
    derivedHierarchical2Obj.displayDerivedHierarchical2();
    return 0;
}
