#include<iostream>
using namespace std;

class Student
{
    public:
        string fullName;
        int rollNum;
        double semPerentage;
        string collegeName;
        int collegeCode;
        Student()
        {
            cout<<"Student class initialized!!\n";
        }
        ~Student(){}
};

int main()
{
    Student dinesh;
    cout<<"Enter your name : ";
    getline(cin,dinesh.fullName);
    cout<<"Enter your roll number : ";
    cin>>dinesh.rollNum;
    cout<<"Enter your sem percentage : ";
    cin>>dinesh.semPerentage;
    cout<<"Enter your college name : ";
    cin>>dinesh.collegeName;
    cout<<"Enter your college code : ";
    cin>>dinesh.collegeCode;
    cout<<"Name : "<<dinesh.fullName<<endl;
    cout<<"RollNum : "<<dinesh.rollNum<<endl;
    cout<<"SemPercentage : "<<dinesh.semPerentage<<endl;
    cout<<"CollegeName : "<<dinesh.collegeName<<endl;
    cout<<"CollegeCode : "<<dinesh.collegeCode<<endl;
    return 0;
}
