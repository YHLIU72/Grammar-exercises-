#include<iostream>
using namespace std;
/*���õ�ʵ��*/
int& max(int& num1, int& num2);
int& min(int& num1, int& num2);
int main()
{
	int x, y;
	cout << "�������һ������";
	cin >> x;
	cout << "������ڶ�������";
	cin >> y;
	max(x, y) = 0;
	cout << "\n�ҳ��������Ȼ����������ֵΪ0�������Ƿֱ�Ϊ��" << endl;
	cout << x << "��" << y << endl;
	cout << "����������������";
	cin >> x;
	cin >> y;
	min(x, y) = 0;
	cout << "\n�ҳ���С����Ȼ�����С����ֵΪ0�������Ƿֱ�Ϊ��" << endl;
	cout << x << "��" << y << endl;
	return 0;
}
int& max(int& num1, int& num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}
int& min(int& num1, int& num2)
{
	if (num1 < num2)
		return num1;
	else
		return num2;
}