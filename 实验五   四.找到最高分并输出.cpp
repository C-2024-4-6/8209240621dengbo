#include<iostream>
using namespace std;
class student {
private:
	int grade;
	/*int scores[5][2];
	int num[5];*/
public:
	void getnum() {
		cout << "������ɼ���  ";
		cin >> grade;
		/*int i;
		cout << "������ѧ�ţ�  ";
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
	//		//д��if���ж������е�����Ƿ��Ӱ�����֮�⣬��ָ��Ļ���(ǰ���max����֮ǰ�õ���ָ�룩
	//		if (max(scores[i][2], scores[i + 1][2])) {
	//			swap(&scores[i][0], &scores[i][0]);//�ܲ���ͬʱ����һ���е���������
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
	/*cout << "����ѧ����:  ";
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
	cout << "��" << num[4] << "��ѧ���ɼ���ã�Ϊ" << grade[4] << "��";
	return 0;
}
