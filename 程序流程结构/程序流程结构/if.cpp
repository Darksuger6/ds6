using namespace std;
#include<iostream>

//程序流程结构
//if
int 可改main1()
{	int score = 0;
	cout << "请输入您的分数" << endl;
	cin >> score;
	if (score > 600)
	{
		if (score > 700)
			cout << "恭喜您考上清华" << endl;
		else if (score > 650)
			cout << "恭喜您考上人大" << endl;
		else
			cout << "恭喜您考上浙大" << endl;
	}
	else if(score>500)
	{
		cout << "恭喜您考上二本" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜您考上三本" << endl;
	}
	else
	{
		cout << "未考上本科" << endl;
	}
	system("continue");
	return 0;
}