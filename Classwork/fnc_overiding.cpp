#include <iostream>
using namespace std;

class parent 
{
public:
    void display()
    {
        cout<<"The parent class is ";
    }
};
class child:public parent
{
    public:
    void display()
    {
        cout<<"The child classs is";
    }
};
int main()
{
    child c;
    c.display();
}