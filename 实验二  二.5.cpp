#include <iostream>
using namespace std;

int main()
{
	char x;
	int letters = 0, digits = 0, spaces = 0, others = 0;
	cout << "请输入一串任意的字符\n";
	while ((x = getchar()) != '\n')
	{
		if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
			letters++;
		else if (x >= '0' && x <= '9')
			digits++;
		else if (x == ' ')
			spaces++;
		else
			others++;
	}
	cout << "英文字母有" << letters << "个\n";
	cout << "数字有" << digits << "个\n";
	cout << "空格有" << spaces << "个\n";
	cout << "其它字符有" << others << "个\n";
	system("pause");
	return 0;
}
