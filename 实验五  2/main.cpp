//main.cpp                      ������ģ��
#include <iostream>             //��������ͷ�ļ���������
#include "student.h"
int main()
{
	Student stud;                //�������
	//Student stud1(007, "tcg", 'm');
	//stud1.num = 7; (007, "tcg", 'm');
	stud.set_value();
	stud.display();              //ִ��stud�����display����
	return 0;
} 