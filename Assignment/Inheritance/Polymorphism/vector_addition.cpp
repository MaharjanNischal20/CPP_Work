/*Write a program to implement vector addition using operator overloading
a) using friend function */

#include <iostream>
using namespace std;

class  vector
{
    private:
    double i,j,k;
    public:
  
     vector(double i=0,double j=0 ,double k=0)
        {
        this->i=i;
        this->j=j;
        this->k=k;
    }
    void display()
    {
        cout<<this->i<<"i"<<"+"<<this->j<<"j"<<"+"<<this->k<<"k"<<endl;
    }
   friend vector operator +(vector &v1,vector &v2); 


};
vector operator +(vector &v1,vector &v2)
{
    vector temp;
    temp.i=v1.i+v2.i;
    temp.j=v1.j+v2.j;
    temp.k=v1.k+v2.k;
    return temp;
}
int main()
{
    vector V1(10,20,5);
    vector V2(1,5,3);
    vector V3( 4,5,2);
   
    vector V4,V5;

    V4 = V2 + V3; 

    V5 = V1 + V4; 
    
    V5.display();
}
