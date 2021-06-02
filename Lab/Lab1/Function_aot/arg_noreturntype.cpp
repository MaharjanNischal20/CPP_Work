#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void area_of_triangle(float , float , float );
int main()
{
    float area,s,a,b,c;
    cout<<"Enter sides of Triangle";
    cout<<"Enter side a";
    cin>>a;
    cout<<"Enter side b";
    cin>>b;
    cout<<"enter side c";
    cin>>c;

    area_of_triangle(a,b,c);
    
    return 0;

}

void area_of_triangle(float a,float b,float c)
{
    float area, s;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"area of triangle = "<<area;
}
