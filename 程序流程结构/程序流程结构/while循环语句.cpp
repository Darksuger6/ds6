using namespace std;
#include<iostream>
#include<ctime>

int �ɸ�main5() {
	srand((unsigned int)time(NULL));//���������

//����Ĭ�ϴ�
	int num = rand() % 100 + 1; //���������
	cout << "������������" << endl;
	cout << "�ܹ����λ���" << endl;
	
	int val = 0;
	int t = 0;
	//��Ϸ����
	while (t<6){
		cin >> val;
		t++;
		if (val > num) {
			cout << "���ƫ��" << endl;
		}
		else if (val < num) {
			cout << "���ƫС" << endl;
		}
		else {
			cout << "��ϲ�������" << endl; 
			break;
		}
	}
//�������
system("pause");
return 0;
}