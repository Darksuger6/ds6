using namespace std;
#include<iostream>
int 可改main4()
{
	int a = 10;
	int b = 20;
	int c = 0;

	c=(a>b ? a : b);// 成立取前，不成立取后
	cout <<"c=" <<c<< endl;

	(a > b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");
	return 0;
}