#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter value of a and b :";
    cin>>a>>b;
    int x=(a-b);
    try{
        if(x !=0)
        {
            cout<<"\n result: "<<(a/(a-b))<<endl;
        }
        else{
            throw(x);
        }
    }
    catch(int i)
    {
        cout<<"Division by zero is not allowed"<<endl;
    }
    cout<<"Next statement"<<endl;
    return 0;
}