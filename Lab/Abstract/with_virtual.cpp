#include <iostream>
using namespace std;

class Shape
{
    protected:
    int width , height;
    public:
    Shape(int x=1 , int y=1)
    {
        width=x;
        height=y;
    }
  virtual  void area()
    {
        cout<<"parent class area:"<<endl;
    }
};
class Rectangle:public Shape
{
    public:
    Rectangle(int a, int b)
    {
        width=a;
        height=b;
    }
    void area()
    {
        cout<<"area of rectangle : "<<width*height<<endl;
    }
};
class Triangle:public Shape
{
    public:
    Triangle(int x, int y)
    {
        width=x;
        height=y;
    }
    void area()
    {
        cout<<"Triangle area:"<<(width*height)/2<<endl;
    }
};
int main()
{
    Shape *shape;
    Rectangle r(10,15);
    Triangle t(20,5);
    shape=&r;           //stores the address of rectangle
    shape->area();
    shape=&t;           //stores the address of triangle
    shape->area();
}