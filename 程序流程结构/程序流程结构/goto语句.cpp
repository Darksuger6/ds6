using namespace std;
#include<iostream>

int main() {
	cout << "1、xxxxx" << endl;
	cout << "2、xxxxx" << endl;
	goto FLAG1;
	cout << "3、xxxxx" << endl;
	cout << "4、xxxxx" << endl;
	FLAG1:
	cout << "5、xxxxx" << endl;

	system("pause");
	return 0;
}