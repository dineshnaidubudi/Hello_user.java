#include<iostream>
using namespace std;

class Accessspecificdemo{
    public:
    int pubvar;
    protected:
    int provar;
    private:
    int privar;
    public:
    void setvar(int privalue,int provalue,int pubvalue){
        privar=privalue;
        provar=provalue;
        pubvar=pubvalue;
    }
    void getvar(){
        cout<<"private variable : "<<privar<<endl;
        cout<<"protected variable : "<<provar<<endl;
        cout<<"public variable : "<<pubvar<<endl;
    }
};
int main(){
    Accessspecificdemo obj;
    int a,b,c;
    cout<<"Before set variable "<<endl;
    obj.getvar();
    cout<<"Enter a value of private variable : "<<endl;
    cin>>a;
    cout<<"Enter a value of protected variable : "<<endl;
    cin>>b;
    cout<<"Enter a value of public variable : "<<endl;
    cin>>c;
    obj.setvar(a,b,c);
    cout<<"After set variable "<<endl;
    obj.getvar();
}
