#include<iostream>
using namespace std;
int main() {
	int x = 0, y = 0;
	cout << "What is 'x'" << endl;
	cin >> x;
	if (x>0&&x<1) { y = 3 - 2 * x; cout << "Y=" << y; }
	else {
		if (1 <= x&&x < 5) { y = 1 + 1 / (2 * x); cout << "Y=" << y;
		}
		else {
			if (5 <= x&&x< 10) { cout << x * x;
			}
			else cout << "ERROR";
		}
	}

	return 0;
}
