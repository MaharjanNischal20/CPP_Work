#include <iostream>
using namespace std;

//data structure =stack
const int MAX = 20;
template <class T>
class Stack
{
private:
    T arr[MAX];
    int top;

public:
    //********** Defining the functions inside class********
    Stack();
    void push(float data);
    T pop();
    float size();
};
//************Calling function outside class ***********
template <class T> // While calling function outside class we need to define template as well every time
Stack<T>::Stack()
{
    top = -1; // Here the initial value of top of stack is set to -1 so when we add the stack up, our base will be 0
}
template <class T> // yeta pani xaa hai
void Stack<T>::push(float data)
{
    arr[++top] = data;
}
template <class T> // yeta pani xaa hai
T Stack<T>::pop()
{
    return arr[top--];
}
template <class T> // yeta pani xaa hai
float Stack<T>::size()
{
    return (top + 1);
}
int main()
{
    cout << "Stack for float data type is: " << endl;
    Stack<float> s1;
    cout << "Size of Stack: " << s1.size() << endl;
    s1.push(23.90);
    s1.push(54.70);
    s1.push(234.67);
    cout << "Size of Stack after pushing 3 numbers: " << s1.size() << endl;
    cout << "Number poppped: " << s1.pop() << endl;
    cout << "Number poppped: " << s1.pop() << endl;
    cout << "Size of Stack after popping : " << s1.size() << endl;
    s1.push(45.7);
    cout << "Size of Stack after pushing : " << s1.size() << endl;
    cout << "Number poppped: " << s1.pop() << endl;
    cout << "Size of Stack after popping: " << s1.size() << endl;
    return 0;
}