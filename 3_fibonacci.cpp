#include<iostream>
using namespace std;
int main()
{
	int* p = new int[20];
	p[0] = 0;
	p[1] = 1;
	for (int i = 2; i < 20; i++)
	{
		p[i] = p[i - 1] + p[i - 2];
	}
	cout << "Fibonacci series: ";
	for (int i = 0; i < 20; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
	delete[] p;
	return 0;
}