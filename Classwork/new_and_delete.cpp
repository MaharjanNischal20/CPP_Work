#include <iostream>
using namespace std;

int main()
{
    int* pointint;
    float* pointfloat;

    pointint=new int;
    pointfloat=new float;
    cout<<"address assigned to pointint is :"<<pointint<<endl;
    cout<<"address assigned to pointfloat is :"<<pointfloat<<endl;
    *pointint=45;
    *pointfloat=45.45;
    cout<<"address assigned to pointint is :"<<pointint<<endl;
    cout<<"address assigned to pointfloat is :"<<pointfloat<<endl;
    delete pointint;
    delete pointfloat;
    return 0;

}