using namespace std;
#include<iostream>

//�������̽ṹ
//if
int �ɸ�main1()
{	int score = 0;
	cout << "���������ķ���" << endl;
	cin >> score;
	if (score > 600)
	{
		if (score > 700)
			cout << "��ϲ�������廪" << endl;
		else if (score > 650)
			cout << "��ϲ�������˴�" << endl;
		else
			cout << "��ϲ���������" << endl;
	}
	else if(score>500)
	{
		cout << "��ϲ�����϶���" << endl;
	}
	else if (score > 400)
	{
		cout << "��ϲ����������" << endl;
	}
	else
	{
		cout << "δ���ϱ���" << endl;
	}
	system("continue");
	return 0;
}