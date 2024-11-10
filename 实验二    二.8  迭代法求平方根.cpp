#include<iostream>
using namespace std;
int main() {
	  double a= 0;
	double b=0;
	cout << "输入初始数据:";
	cin >> a;
	double x = 0;
	b = (a + 1) / 2;
	for (b; (b - x) > 1e-5;)
	{
		int t = 0;
		x = (b + a / b) / 2;
		b= x;
	}
	cout << b;

	return 0;
}