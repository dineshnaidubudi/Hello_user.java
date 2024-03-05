#include <iostream>
using namespace std;
class Person {
public:
    void greet() {
        cout << "Person greets" << endl;
    }
};
class Teacher : public Person {
public:
    void greet() {
        cout << "Teacher greets students" << endl;
    }
};
class Student : public Person {
public:
    void greet() {
        cout << "Student greets teachers" << endl;
    }
};
class TeachingAssistant : public Teacher, public Student {
};

int main() {
    TeachingAssistant ta;
    ta.Teacher::greet();
    ta.Student::greet();
    return 0;
}
