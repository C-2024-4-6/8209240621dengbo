#include<iostream>
using namespace std;
int main() {
	const  double t = 0.8;
	int a = 2;
	int j = 1,b=0;
		double sum = 0;
	for (a;a<100 ;a=a*2)
	{
		
		sum = sum + a * t;
		j++;
		if (a * 2 > 100) {
			b = a;
			break;
		}
		
		
	}
	cout << "ƽ��ÿ��" << sum / j << endl;
	cout << "һ������ " << b << "��" << endl;
	
	return 0;
}