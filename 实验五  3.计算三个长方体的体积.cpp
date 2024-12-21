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
		cout << "长方体的体积" << endl;
		return a.height * a.length * a.width;
	}
	inline void getnum() {
		cout << "输入长:" << endl;
		cin >> length;
		cout << "输入宽:" << endl;
		cin >> width;
		cout << "输入高:" << endl;
		cin >> height;
	}
	void show(cube a) {
		cout <<"体积为：" << a.volume(a) << endl;
	}
};
int main() {
	cube a, b, c;
	a.getnum();
	b.getnum();
	c.getnum();
	cout << "A的体积为：";
	a.show(a);
	cout << "B的体积为：";
	b.show(b);
	cout << "C的体积为：";
	c.show(c);
}