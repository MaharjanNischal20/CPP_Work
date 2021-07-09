#include <iostream>
using namespace std;

class bugatti
{
    public:
bugatti()
    {
    cout<<"Bugatti is the fastest car"<<endl;
    }
    ~bugatti()
    {
        cout<<"This car is based on aerodynamics"<<endl;
    }
};
class RollsRoyce
{
    public:
    RollsRoyce()
    {
        cout<<"Rolls Royce is a cool car"<<endl;
    }
    ~RollsRoyce()
    {
        cout<<"It's one of the most expensive luxury car"<<endl;
    }
};
class supercar:public bugatti,public RollsRoyce
{
    public:
         supercar()
        {
            cout<<"Luxury car have its own specialtiy"<<endl;
        }

    ~supercar()
    {
        cout<<"Only rich people can afford it."<<endl;
    }
};
int main()
{
    supercar sc;
}

