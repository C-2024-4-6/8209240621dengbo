class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value();
	Student(int num, char name, char sex) {};
	Student() {};
private:
	int num;
	char name[20];
	char sex;
};