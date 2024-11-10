#include<iostream>
using namespace std;
#define PI 3.14
int main() {
	cout << "r=" << endl;
	int r = 0, h = 0;
	cin >> r;
	cout << "h=" << endl;
	cin >> h;
	cout << (PI * r * r * h) / 3;
	return 0;
}