#include<iostream>
using namespace std;

inline void displayWelcomeMessage()
{
    cout<<"Hello, user!!"<<endl;
}

class Box
{
    private:
        float l;
        float w;
        float h;
    public:
        void boxArea(float l,float w,float h)
        {
            float area=2*((l*w)+(w*h)+(h*l));
            cout<<"The area of the box : "<<area<<endl;
        }
        void boxVolume(float l,float b,float h);
        friend void displayBoxDimensions(Box d);
        void set(float length,float width,float height)
        {
            l=length;
            w=width;
            h=height;
        }
};

void displayBoxDimensions(Box d)
{
    cout<<"The dimensions of the box : "<<d.l<<" X "<<d.w<<" X "<<d.h<<endl;
}

//member function outside the class
void Box::boxVolume(float l,float b,float h)
{
    float volume=l*b*h;
    cout<<"The volume of the box : "<<volume<<endl;
}

int main()
{
    Box b;
    float length,width,height;
    cout<<"Enter the length, width, and height : ";
    cin>>length>>width>>height;
    b.set(length,width,height);
    b.boxArea(length,width,height);
    b.boxVolume(length,width,height);
    displayBoxDimensions(b);
    displayWelcomeMessage();
    return 0;
}


