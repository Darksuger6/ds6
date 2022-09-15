using namespace std;
#include<iostream>

int ¿É¸Ämain6() {

	int num = 100;

	do 
	{//153,abc
		int a = 0;
		a = num % 10;
		int b = 0;
		b = num / 10 % 10;
		int c = 0;
		c = num / 100;

		if (a*a*a + b*b*b + c*c*c == num)
		{
			cout << num << endl;
		}
			num++;
	} while (num<1000);	

	system("pause");
	return 0;
}