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
		cout << "x����Ϊ��" << x << endl;
		cout << "y����Ϊ��" << y << endl;
	}
};
int main() {
	point A(60, 80);
	int a, b;
	cout << "x����ı���Ϊ��";
	cin >> a;
	cout << "y����ı���Ϊ��";
	cin >> b;
	A.setPoint(a, b);
	A.display();
}