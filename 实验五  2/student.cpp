//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include"student.h"//��Ҫ©д���У��������ͨ����
using namespace std;

//Student::Student(int num, char name, char sex) {
//this->num=num;
//this->sex = sex;
//
//};
void Student::display()         //�����ⶨ��display�ຯ��
{
    std::cout << "num��" << num << std::endl;
    std::cout << "name��" << name << std::endl;
    std::cout << "sex��" << sex << std::endl;
}
void Student::set_value()
{
    cout << "num is��" ;
    cin >> Student::num;
    cout << "name is��" ;
    cin >> Student::name;
    cout << "sex is��" ;
    cin >> Student::sex;
}
