using namespace std;
#include<iostream>
int main()
{
	int a = 10;
	int b = 10;
	int a1 = a-- * 10;
	int a2 = a1--;
	int b1 = --b * 10;
	int b2 = --b1;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "a1=" << a1 << endl;
	cout << "a2=" << a2 << endl;
	cout << "b1=" << b1 << endl;
	cout << "b2=" << b2 << endl;
	
}