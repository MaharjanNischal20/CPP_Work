#include <iostream>
using namespace std;

const int MAX = 20;
template <class T>
class stack
{
    private:
    T arr[MAX];
    int top;
    public:
    stack()
    {
        top=-1;
    }
    void push(T data)
    {
        arr[++top]=data;
    }
    T pop()
    {
        return arr[top--];
    }
    int size()
    {
        return(top+1);
    }
};
int main()
{
    cout<<"Stack for integer data type"<<endl;
    stack<int> s1;
    cout<<"size of stack: "<<s1.size()<<endl;
    s1.push(11);
    s1.push(22);
    s1.push(33.33);
    cout<<"size of stack:"<<s1.size()<<endl;
    cout<<"Number popped:"<<s1.pop()<<endl;
    cout<<"Number popped:"<<s1.pop()<<endl;
    cout<<"size of stack:"<<s1.size()<<endl;
    s1.push(44);
    cout<<"size of stack:"<<s1.size()<<endl;
    cout<<"Number popped:"<<s1.pop()<<endl;
    cout<<"size of stack:"<<s1.size()<<endl;
    cout<<"Stack for floating point data type"<<endl;
    stack<float> s2;
     cout<<"size of stack: "<<s2.size()<<endl;
    s2.push(11.11);
    s2.push(22.22);
    s2.push(33.33);
    cout<<"size of stack:"<<s2.size()<<endl;
    cout<<"Number popped:"<<s2.pop()<<endl;
    cout<<"Number popped:"<<s2.pop()<<endl;
    cout<<"size of stack:"<<s2.size()<<endl;
    s1.push(44.44);
    cout<<"size of stack:"<<s2.size()<<endl;
    cout<<"Number popped:"<<s2.pop()<<endl;
    cout<<"size of stack:"<<s2.size()<<endl;
}
