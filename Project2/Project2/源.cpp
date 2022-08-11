#include<iostream>
using namespace std;
#define Day 7  //#define 宏常量
#include<string>

int main()
{
	//cout << "一周总共有：" << Day << "天" << endl;     // \n 换行

	const int 月= 12;  //const 修饰的变量
	
	//cout << "一年总共有：" << 月 << "个月份" << endl;

	//cout << c << endl;
	
	//cout << "int a 所占用内存空间为:" << sizeof(int) << endl;

	//cout << "\\\\\n";

	bool m = true;
	//cout << m << endl;

	bool n = false;
	//cout << n<< endl;

	//cin >> a;
	//cout << a << endl;

	//string str = "nb666";
	//cin >> str;
	//cout << str << endl;

	//cin >> n;
	//cout <<n << endl;

	int q = -10;
	int p = -3;
	cout<< q % p << endl;

	float sb = 0;
	cout << q / sb << endl;    //输出的inf是无穷


	int a = 10;
	cout << a++   +   a-- << endl;

	


}
