using namespace std;
#include<iostream>
int �ɸ�main2()
{
	int score = 0;
	cout << "���������֣�10-0��" << endl;
	cin >> score;

	switch (score)
	{
	case 10:
	case 9:
		cout << "����Ϊ�ܺ�" << endl;
		break;
	case 8:
	case 7:
		cout << "����Ϊ����" << endl;
		break;
	case 6:
	case 5:
		cout << "����Ϊһ��" << endl;
		break;
	default:
		cout << "����Ϊ����" << endl;
		break;

	}

	system("pause");
	return 0;
}