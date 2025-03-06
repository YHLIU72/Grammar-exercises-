#include<iostream>
using namespace std;
int main()
{
	int x, y, z, sum = 0;
	for (z = 0; z <= 20; z++)
		for (y = 0; y <= (100 - 5 * z) / 2; y++)
			if (100 - 2 * y - 5 * z >= 0)
			{
				sum++;
				cout << "x=" << 100 - 2 * y - 5 * z << " \ty=" << y << " \tz=" << z << endl;
			}
	cout << "Total number of solutions: " << sum << endl;
}