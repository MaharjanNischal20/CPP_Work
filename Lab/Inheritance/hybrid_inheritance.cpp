#include <iostream>
using namespace std;

class staff
{
    protected:
      int code;
    string name;
    public:
    void getdataofstaff()
    {
        cout<<"Enter code : "<<endl;
        cin>>code;
        cout<<"Enter Name : "<<endl;
        cin>>name;
    }
};
class teacher:public staff
{
    protected:
        string subject , publication;
    public:
    void getdataofteacher()
    {
        cout<<"Enter the subject name : ";
        cin>>subject;
        cout<<"Enter the Publication name : ";
        cin>>publication;
    }
      void display()
    {
        cout<<"THe code of staff = "<<code<<endl;
        cout<<"THe name of staff = "<<name<<endl;
        cout<<"THe code of staff = "<<code<<endl;
        cout<<"THe name of staff = "<<name<<endl;
        cout<<"THe Name of subject = "<<subject<<endl;
        cout<<"THe name of publication = "<<publication<<endl;

    }
};
class officer:public staff
{
    protected:
     string grade;
    public:
    void getdataofofficer()
    {
        cout<<"Enter grade : ";
        cin>>grade;
    }
     void display()
     {
        cout<<"THe code of staff = "<<code<<endl;
        cout<<"THe name of staff = "<<name<<endl;
         cout<<"The grade of officer = "<<grade<<endl;
     }
};
class typist:public staff
{
    protected:
    int speed;
    public:
    void getdataoftypist()
    {
        cout<<"Enter speed of typist : ";
        cin>>speed;
    }
};
class regular:public typist
{
    protected:
    int dailywages_reg;
    public:
    void getdataofregular()
    {
         cout<<"Enter the daily wage of regular typist :"<<endl;
        cin>>dailywages_reg;
    }
    void display()
    {
    cout<<"THe code of staff = "<<code<<endl;
    cout<<"THe name of staff = "<<name<<endl;
    cout<<"The speed of typist = "<<speed<<endl;
    cout<<"The daily wage of regular typist = "<<dailywages_reg<<endl;
    }
};
class casual:public typist
{
    protected:
    int dailywages;
    public:
    void getdataofdailywage()
    {
        cout<<"Enter the daily wage of  casual typist :"<<endl;
        cin>>this->dailywages;
    }
void display()
{
    cout<<"THe code of staff = "<<code<<endl;
    cout<<"THe name of staff = "<<name<<endl;
    cout<<"The speed of typist = "<<speed<<endl;
    cout<<"The daily wage of typist = "<<dailywages<<endl;
}
};
int main()
{
    cout<<"Enter  the details of employees "<<endl;               //Pick the required object of employeee.
    teacher t;
    t.getdataofstaff();
    t.getdataofteacher();
    officer o;
    o.getdataofstaff();
    o.getdataofofficer();
    regular r;
    r.getdataofstaff();
    r.getdataoftypist();
    r.getdataofregular();
    casual c;
    c.getdataofstaff();
    c.getdataoftypist();
    c.getdataofdailywage();
    cout<<"Here the details of employees are "<<endl;
    t.display();
    o.display();  
    r.display();
    c.display();
}