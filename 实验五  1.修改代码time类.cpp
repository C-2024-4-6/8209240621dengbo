#include<iostream>
#include "源.h"
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
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
		cout << "Type the hour：  ";
		cin >> hour;
		cout << "Type the minute：  ";
		cin >> minute;
		cout << "Type the sec：  ";
		cin >> sec;
	}
	void show() {
		cout <<"当前时间为" << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	int hour; int minute; int sec;
	           //定义t1为Time类对象
	Time t1(0, 0, 0);
	//cin >> t1.h;      //输入设定的时间 
	//cin >> t1.m;
	//cin >> t1.s;
	//cout << t1.h << ":" << t1.m << ":" << t1.s << endl;
	t1.gettime();
	t1.show();
	return 0;
}