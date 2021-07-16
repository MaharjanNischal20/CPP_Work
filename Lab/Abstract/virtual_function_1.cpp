#include <iostream>
using namespace std;

class Base
{
    int x;
    public:
    virtual void fun()=0;
    int getx()
    {
        return x;
    }
};
class derived:public Base
{
    int y;
    public:
    void fun()
    {
        cout<<"fun function is called";

    }
};
int main()
{
    derived d;
    d.fun();
    return 0;
}