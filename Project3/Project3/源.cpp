using namespace std;
#include<iostream>
int main()
{
	int a = 10;
	a += 2;
	cout << "a=" << a << endl;
	
	a = 6;
	a -= 2;
	cout << "a=" << a << endl;

	a = 2;
	a *= 2;
	cout << "a=" << a << endl;

	a = 6;
	a %= 3;
	cout << "a=" << a << endl;

	
	int b = 20;
	a = 0;
	cout << (a==b) << endl;
	cout << !a << endl;
	cout << (a&&b) << endl;
	cout << (a || b) << endl;


	system("pause");
	
}
