using namespace std;
#include<iostream>

int �ɸ�main9() {
	for (int i = 0; i <= 100; i++) {
		if (i % 2 == 1) {
			continue;
		}
		cout << i << endl;
	}

	system("pause");
	return 0;
}