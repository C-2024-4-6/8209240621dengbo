#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	//���������
	int i = min(a, b);
	for (i<max(a,b);; i--)
	{
		if (a % i == 0 && b % i == 0)cout << i; break;
	}
	int t = max(a, b);
	//��С��������
	for (;; t++)
	{
		if (t % a == 0 && t % b == 0)cout << t; break;
	}
	return 0;
}
