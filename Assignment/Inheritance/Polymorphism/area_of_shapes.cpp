/* Write a program finding area of square, rectangle, triangle. Use function overloading
technique */

#include<iostream>
using namespace std;

class shape
{
    public:
       void Area( double length)
       {
            double area_sphere;
            area_sphere=length*length;
            cout<<" Area of square : "<<area_sphere<<endl;
       }

       void Area( double length , double breadth)
       {
            double area_rectangle;
            area_rectangle=length*breadth;
           cout<<" Area of rectangle : "<<area_rectangle<<endl;
       }

       void Area( int base , int height)
       {
            double area_sphere;
            area_sphere=0.5*(base*height);
           cout<<"Area of triangle : "<<area_sphere<<endl;
       }
};
int main()
{
    shape S;
    S.Area(10.0);
    S.Area(14.23,10.3);
    S.Area(10,5);
}