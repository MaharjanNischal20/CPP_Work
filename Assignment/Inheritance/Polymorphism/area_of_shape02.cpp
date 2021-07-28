/*Create a base class called shape. Use this class to store two double type values that could be
used to compute the area of figures. Derive two specific classes called triangle and rectangle
from the base shape. Add to the base class, a member function get_data() to initialize base
class data members and another member function display_area() to compute and display the
area of figures. Make display_area() as virtual function and redefine this function in the
derived class to suit their requirements */



#include <iostream>
using namespace std;

class shape
{
    protected:
    double width,height;
    public:
    void get_data()
    {
      width=1;
      height=1;
    }
    virtual void display_area()
    {
      cout<<"Area of shape is : "<<endl;
    }
};
class rectangle:public shape
{   
    public:
   rectangle(int w=1, int h=1)
        {
            width=w;
            height=h;
        }
        void display_area()
        {
            double area_rect;
            area_rect=width*height;
            cout<<"Area of rectangle is :"<<area_rect<<endl;
        }
    };
    class triangle:public shape
    {
        public:
        triangle(int w=1,int h=1)
        {
            width=w;
            height=h;
        }
        void display_area()
        {
            double area_t;
            area_t=0.5*(width*height);
            cout<<"Area of triangle is :"<<area_t<<endl;
        }
};
int main()
{
    shape *s=new rectangle(10,20);
    s->display_area();
    s=new triangle(50,10);
    s->display_area();
}