//main.cpp                      主函数模块
#include <iostream>             //将类声明头文件包含进来
#include "student.h"
int main()
{
	Student stud;                //定义对象
	//Student stud1(007, "tcg", 'm');
	//stud1.num = 7; (007, "tcg", 'm');
	stud.set_value();
	stud.display();              //执行stud对象的display函数
	return 0;
} 