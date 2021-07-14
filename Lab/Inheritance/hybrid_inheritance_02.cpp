#include <iostream>
using namespace  std;

class student
{
    protected:
    int roll;
    string name;
    public:
    void get_student()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter roll no. : ";
        cin>>roll;
    }
};
class test: virtual public student      //hierarchical inheritance
{
    protected:
    int math,eng;
    public:
    void get_test()
    {
        cout<<"Enter the marks obtained by the student in math : ";
        cin>>math;
        cout<<"Enter the marks obtained by the student in english : ";
        cin>>eng;
    }
};
class sport:virtual public student      //hierarchical inheritance
{
    protected:
    int score;
    public:
    void get_sport()
    {
        cout<<"Enter the score in sport of a student : ";
        cin>>score;
    }
};
class result:public test,public sport           //multiple inheritance
{
    protected:
    int total;
    public:
    void get_result()
    {
        total=math+eng+score;
    }
    void display()
    {
        cout<<"The total score obtained by the student is : "<<total<<endl;
    }

};
int main()
{
    result r;
    r.get_student();
    r.get_test();
    r.get_sport();
    r.get_result();
    r.display();
}
