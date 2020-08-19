#include<iostream>
using namespace std;
float area(float r)
{
    float a;
    a=3.14*r*r;
    cout<<"\nArea of Circle is :"<<a;
}
float area(double x,double y)
{
    float a;
    a=x*y;
    cout<<"\nArea of Rectangle is :"<<a;
}
float area(float b,float h)
{
    float a;
    a=0.5*h*b;
    cout<<"\nArea of Triangle is :"<<a;
}
int main()
{
    float opt,r,b,h;
    double x,y;
    cout<<"\nSelect any shape\n"<<"1. Circle\n2. Rectangle\n3. Triangle\n";
    cin>>opt;
    if(opt==1)
    {
        cout<<"\nEnter radius of circle :";
        cin>>r;
        area(r);
    }
    else if(opt==2)
    {
        cout<<"\nEnter length of rectangle :";
        cin>>x;
        cout<<"Enter breadth of rectangle :";
        cin>>y;
        area(x,y);
    }
    else if(opt==3)
    {
        cout<<"\nEnter height of triangle :";
        cin>>h;
        cout<<"Enter base of triangle :";
        cin>>b;
        area(h,b);
    }
    else
    cout<<"\nInvalid Input";
    return 0;
}
