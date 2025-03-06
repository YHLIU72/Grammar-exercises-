#include <iostream>
#include <cmath>
using namespace std;

inline double f(double x) { return 4 * x * x * x - 2 * x * x - 2; }

int main()
{
	double left, right, mid;
	cout << "Enter the left boundary: ";
	cin >> left;
	cout << "Enter the right boundary: ";
	cin >> right;

	if (f(left) * f(right) > 0)
	{
		cout << "No root in this interval" << endl;
		return 0;
	}
	else if (f(left) == 0)
	{
		cout << "Root is " << left << endl;
		return 0;
	}
	else if (f(right) == 0)
	{
		cout << "Root is " << right << endl;
		return 0;
	}

	while (right - left > 1e-6) // Use a smaller tolerance for more precision
	{
		mid = (left + right) / 2;
		if (f(mid) == 0)
		{
			cout << "Root is " << mid << endl;
			return 0;
		}
		else if (f(mid) * f(left) < 0)
		{
			right = mid;
		}
		else
		{
			left = mid;
		}
	}

	cout << "Root is approximately " << (left + right) / 2 << endl;
	return 0;
}