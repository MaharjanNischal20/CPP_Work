#include<iostream>
#include<cstring>
using namespace std;

template<class T>
T find_max(T a, T b)
{
    T result;
    if(a>b)
    {
        result=a;
    }
    else
    {
        result=b;
    }
    return result;
}
    char *find_max(char *a, char *b)
    {
        char *result;
        if(strcmp(a,b)>0)
        {
            result=a;
        }
        else
        {
            result=b;
        }
        return result;
    }
    int main()
    {
        int i1=10,i2=15;
        cout<<"greater is :"<<find_max(i1,i2)<<endl;
        float f1=5.44 , f2=10.55;
        cout<<"greater is :"<<find_max(f1,f2)<<endl;
        char str1[]="Lalitpur",str2[]="Kathmandu";
        cout<<"greater is :"<<find_max(str1,str2)<<endl;
    }