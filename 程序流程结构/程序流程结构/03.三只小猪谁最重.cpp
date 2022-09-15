using namespace std;
#include<iostream>
int 可改main3()
{
	int A = 0;
	int B = 0;
	int C = 0;

	cout << "请输入A体重" << endl;
	cin >> A;

	cout << "请输入B体重" << endl;
	cin >> B;

	cout << "请输入C体重" << endl;
	cin >> C;

	cout << "A体重为：" <<A<< endl;
	cout << "B体重为：" <<B<< endl;
	cout << "C体重为：" <<C<< endl;

	if (A > B)
	{
		if (A > C)
			cout << "A最重" << endl;
	}
	else if(B>C)
	{
		cout << "B最重" << endl;
	}
	else
	{
		cout << "C最重" << endl;
	}

	system("pause");
	return 0;
}