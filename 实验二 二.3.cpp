#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "�������������߳�" << endl;
	cin >> a >> b >> c;
	if ((a + b) > c && (a + c) > b && (b + c) > a)
	{
		cout << "C=" << a + b + c;
		if (a == b || b == c || c == a)cout << "����������" << endl;
		else {}
	}
	else cout << "ERROR";
	return 0;
}


