#include<iostream>
using namespace std;
class point {
private:
	int x;
	int y;
public:
	point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void setPoint(int i, int j) {
		x = x + i;
		y = y + j;
	}
	void display() {
		cout << "x坐标为：" << x << endl;
		cout << "y坐标为：" << y << endl;
	}
};
int main() {
	point A(60, 80);
	int a, b;
	cout << "x坐标改变量为：";
	cin >> a;
	cout << "y坐标改变量为：";
	cin >> b;
	A.setPoint(a, b);
	A.display();
}