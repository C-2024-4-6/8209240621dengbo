class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value();
	Student(int num, char name, char sex) {};
	Student() {};
private:
	int num;
	char name[20];
	char sex;
};