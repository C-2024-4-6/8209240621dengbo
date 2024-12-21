#include<iostream>
using namespace std;
class student {
private:
	int grade;
	/*int scores[5][2];
	int num[5];*/
public:
	void getnum() {
		cout << "请输入成绩；  ";
		cin >> grade;
		/*int i;
		cout << "请输入学号：  ";
		cin >> i;
		scores[i - 1][1] = grade;*/
	}
	int givenum()
	{
		return grade;
	}
	bool max(int a, int b) {
		if (a >= b) {
			int i;
			i = b;
			b = a;
			a = i;
			return true;
		}
		else { return false; }
	}
	//void coutmax() {
	//	int i = 0;
	//	for (i; i < 5; i++)
	//		//写在if的判断条件中的语句是否会影响语句之外，用指针的话；(前面的max函数之前用的是指针）
	//		if (max(scores[i][2], scores[i + 1][2])) {
	//			swap(&scores[i][0], &scores[i][0]);//能不能同时交换一组中的两项内容
	//			swap(&scores[i][1], &scores[i][1]);
	//		}
	//		else {}
	//
	//}
};
void swap(int* a, int* b) {
    int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int i = 0;
	const int n = 5;
	/*cout << "输入学生数:  ";
	cin >> n;*/
	student a_i;
	int grade[n];
	int num[n];
	for (i; i < n; i++)
	{
		a_i.getnum();
		grade[i] = a_i.givenum();
		num[i] = i+1;
	}
	for (i; i < n-26; i++)
	{
		if (max(grade[i], grade[i + 1])) {
			swap(&grade[i], &grade[i + 1]);
			swap(&num[i], &num[i + 1]);
		}
		else {}
	}
	cout << "第" << num[4] << "名学生成绩最好，为" << grade[4] << "分";
	return 0;
}
