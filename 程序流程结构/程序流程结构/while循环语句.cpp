using namespace std;
#include<iostream>
#include<ctime>

int 可改main5() {
	srand((unsigned int)time(NULL));//随机数种子

//设置默认答案
	int num = rand() % 100 + 1; //生成随机数
	cout << "碰运气猜数字" << endl;
	cout << "总共六次机会" << endl;
	
	int val = 0;
	int t = 0;
	//游戏程序
	while (t<6){
		cin >> val;
		t++;
		if (val > num) {
			cout << "结果偏大" << endl;
		}
		else if (val < num) {
			cout << "结果偏小" << endl;
		}
		else {
			cout << "恭喜您答对了" << endl; 
			break;
		}
	}
//公布结果
system("pause");
return 0;
}