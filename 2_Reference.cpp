#include<iostream>
using namespace std;
/*引用的实例*/
int& max(int& num1, int& num2);
int& min(int& num1, int& num2);
int main()
{
	int x, y;
	cout << "请输入第一个数：";
	cin >> x;
	cout << "请输入第二个数：";
	cin >> y;
	max(x, y) = 0;
	cout << "\n找出最大数，然后把最大数赋值为0后，两个是分别为：" << endl;
	cout << x << "和" << y << endl;
	cout << "请再输入两个数：";
	cin >> x;
	cin >> y;
	min(x, y) = 0;
	cout << "\n找出最小数，然后把最小数赋值为0后，两个是分别为：" << endl;
	cout << x << "和" << y << endl;
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