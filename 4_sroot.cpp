#include <iostream>
#include <cmath> // Include cmath for sqrt function
using namespace std;

template <typename T>
auto sroot(T n)
{
	return sqrt(n);
}

int main()
{
	int a = 25;
	long b = 100;
	double c = 1000;
	cout << "Square root of " << a << " is " << sroot(a) << endl;
	cout << "Square root of " << b << " is " << sroot(b) << endl;
	cout << "Square root of " << c << " is " << sroot(c) << endl;
	return 0;
}
// Output
// Square root of 25 is 5
// Square root of 100 is 10
// Square root of 1000 is 31.6228
