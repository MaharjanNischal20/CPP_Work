#include <iostream>
using namespace std;

class parent 
{
public:
    void display()
    {
        cout<<"The parent class is "<<endl;
    }
};
class child:public parent
{
    public:
    void display()
    {
        cout<<"The child classs is"<<endl;
    }
};
int main()
{
    child c;
    c.parent::display();
    c.display();
}