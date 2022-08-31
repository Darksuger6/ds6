using namespace std;
#include<iostream>

int 可改main8() {
//1、星图程序↓
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << "* ";
		}
		cout << endl;
	}                

//2、乘法口诀表↓(i为横，j为纵)
	//for (int i = 1; i <= 9; i++) {
	//	for (int j = 1; j <= i; j++) {
	//		cout << "i*j=" << i * j << "\t";
	//	}
	//	cout << endl;
	//}
	system("pause");
	return 0;
}