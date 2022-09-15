using namespace std;
#include<iostream>
int 可改main2()
{
	int score = 0;
	cout << "请输入评分（10-0）" << endl;
	cin >> score;

	switch (score)
	{
	case 10:
	case 9:
		cout << "您认为很好" << endl;
		break;
	case 8:
	case 7:
		cout << "您认为不错" << endl;
		break;
	case 6:
	case 5:
		cout << "您认为一般" << endl;
		break;
	default:
		cout << "您认为垃圾" << endl;
		break;

	}

	system("pause");
	return 0;
}