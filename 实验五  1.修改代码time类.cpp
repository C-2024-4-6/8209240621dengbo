#include<iostream>
#include "Դ.h"
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
public:
	/*int h, m, s;*/
	Time() {};
	Time(int hour, int minute, int sec)  {
		this->hour = hour;
		this->minute = minute;
		this->sec = sec;
	};
	void gettime() {
		cout << "Type the hour��  ";
		cin >> hour;
		cout << "Type the minute��  ";
		cin >> minute;
		cout << "Type the sec��  ";
		cin >> sec;
	}
	void show() {
		cout <<"��ǰʱ��Ϊ" << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	int hour; int minute; int sec;
	           //����t1ΪTime�����
	Time t1(0, 0, 0);
	//cin >> t1.h;      //�����趨��ʱ�� 
	//cin >> t1.m;
	//cin >> t1.s;
	//cout << t1.h << ":" << t1.m << ":" << t1.s << endl;
	t1.gettime();
	t1.show();
	return 0;
}