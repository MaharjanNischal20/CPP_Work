#include <iostream>
using namespace std;

// template function
template <class T1, class T2>
int Large(T1 n1, T2 n2)
{
	return (n1 > n2) ? n1 : n2;
}

int main()
{
	int i1;
	float f1;
	char c1;

	cout << "Enter  integers:\n";
	cin >> i1 ;
	cout << "Enter float integers:\n";
	cin >> f1 ;
	cout << "\nEnter characters:\n";
	cin >> c1;
	cout << Large(i1, c1) <<" is larger." << endl;
	cout << Large(i1, f1) <<" is larger." << endl;
	return 0;
}