using namespace std;
#include<iostream>

int �ɸ�main7()
{
	for (int i1 = 1; i1 < 100; i1++) 
		if (i1/7==0||i1%10==7||i1/10==7) {
			cout << "�������" << endl;
		}
		else {
			cout << i1 << endl;
		}
	system("pause");
	return 0;
}