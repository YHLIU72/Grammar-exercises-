#include<iostream>
using namespace std;
void change(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	int a, b;
	cout << "Enter the first numbers: ";
	cin >> a;
	cout << "Enter the second numbers: ";
	cin >> b;
	if (a > b)
		cout << "The first number is greater than the second number." << endl;
	change(a, b);
	cout << "The first number is now: " << a << endl;
	cout << "The second number is now: " << b << endl;
	return 0;
}