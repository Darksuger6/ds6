using namespace std;
#include<iostream>
int �ɸ�main3()
{
	int A = 0;
	int B = 0;
	int C = 0;

	cout << "������A����" << endl;
	cin >> A;

	cout << "������B����" << endl;
	cin >> B;

	cout << "������C����" << endl;
	cin >> C;

	cout << "A����Ϊ��" <<A<< endl;
	cout << "B����Ϊ��" <<B<< endl;
	cout << "C����Ϊ��" <<C<< endl;

	if (A > B)
	{
		if (A > C)
			cout << "A����" << endl;
	}
	else if(B>C)
	{
		cout << "B����" << endl;
	}
	else
	{
		cout << "C����" << endl;
	}

	system("pause");
	return 0;
}