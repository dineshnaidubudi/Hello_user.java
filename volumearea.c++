#include<iostream>
#include "boxVolume.h"
#include "boxArea.h"
using namespace std;
int main(){
    float l,w,h;
    cout<<"Enter the length, width,height : "<<endl;
    cin>>l>>w>>h;
    boxVolume(l,w,h);
    boxArea(l,w,h);
}

