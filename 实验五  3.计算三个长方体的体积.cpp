#include<iostream>
using namespace std;
class cube {
private:
	int length;
	int width;
	int height;
public:
	cube() {};
	cube(int l, int w, int h) {
		this->height = h;
		this->length = l;
		this->width = w;
	};
	int volume(cube a) {
		cout << "����������" << endl;
		return a.height * a.length * a.width;
	}
	inline void getnum() {
		cout << "���볤:" << endl;
		cin >> length;
		cout << "�����:" << endl;
		cin >> width;
		cout << "�����:" << endl;
		cin >> height;
	}
	void show(cube a) {
		cout <<"���Ϊ��" << a.volume(a) << endl;
	}
};
int main() {
	cube a, b, c;
	a.getnum();
	b.getnum();
	c.getnum();
	cout << "A�����Ϊ��";
	a.show(a);
	cout << "B�����Ϊ��";
	b.show(b);
	cout << "C�����Ϊ��";
	c.show(c);
}