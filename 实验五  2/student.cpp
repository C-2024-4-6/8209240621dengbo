//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include"student.h"//不要漏写此行，否则编译通不过
using namespace std;

//Student::Student(int num, char name, char sex) {
//this->num=num;
//this->sex = sex;
//
//};
void Student::display()         //在类外定义display类函数
{
    std::cout << "num：" << num << std::endl;
    std::cout << "name：" << name << std::endl;
    std::cout << "sex：" << sex << std::endl;
}
void Student::set_value()
{
    cout << "num is：" ;
    cin >> Student::num;
    cout << "name is：" ;
    cin >> Student::name;
    cout << "sex is：" ;
    cin >> Student::sex;
}
