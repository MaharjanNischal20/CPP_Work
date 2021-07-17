#include <iostream>
using namespace std;

class shape
{
    public:
     virtual int area()=0;
    virtual int perimeter()=0;
     virtual void display()=0;
     ~shape()
    {
        cout<<"Destructor of shape is called ";
    }
 
};
class rectangle:public shape
{
    private:
    int length ,breadth;
    public:
    rectangle(int l=1 ,int b=1)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
    void display()
       {
        cout<<"the area of rectangle = "<<area()<<endl;
        cout<<"the perimeter of rectangle = "<<perimeter()<<endl;
    }
           ~rectangle()
    {
        cout<<"Destructor of rectangle is called ";
    }

};
class circle:public shape
{
    private:
    int radius;
    public:
    circle(int radius=1)
    {
       this->radius=radius;
    }
    int area()
    {
        return 3.14*this->radius*this->radius;
    }
    int perimeter()
    {
        return 2*3.14*this->radius;
    }
     void display()
    {
        cout<<"the area of circle = "<<area()<<endl;
        cout<<"the perimeter of circle = "<<perimeter()<<endl;
    }
    ~circle()
    {
        cout<<"Destructor of shape is called ";
    }
 
};
int main()
{
    shape *p=new rectangle(10,20);
    p->area();
    p->perimeter();
    p->display();
    p=new circle(5);
    p->area();
    p->perimeter();
    p->display();
    delete p;
     p->area();
    p->perimeter();
    p->display();
}