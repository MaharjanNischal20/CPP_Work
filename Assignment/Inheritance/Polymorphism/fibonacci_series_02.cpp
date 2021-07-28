/*Write a program to generate Fibonacci series using operator overloading of ++ operator
b) for post increment*/

#include <iostream>
using namespace std;

 class fibonacci 
 {
     private:
     int n1,n2,n3;
     public:
     fibonacci()
     {
         n1=0;
         n2=1;
         n3=0;
     }
     void operator ++(int)  //post increment ma dummy int parameter pass garnu parcha.
     {
         cout<<n1<<"\t";
         n3=n1+n2;
         n1=n2;
         n2=n3;
     }
 };
 int main()
 {
     int num,i;
     fibonacci fb;
     cout<<"How many numbers do you want to print ? ";
     cin>>num;
     for(i=0; i<num; i++)
     {
         fb++;
     }
 }