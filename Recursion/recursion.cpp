#include <iostream>
#include <iomanip>
using namespace std;

double mySum(double X, unsigned int N);

int main()
{
	cout << setw(19) << "X";
	cout << setw(19) << "sum X to X+3";
	cout << setw(19) << "1/(sum X to X+5)";
	cout << setw(19) << "sum X to X+7";
	cout << endl;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	

	int i;
	double xValue;

	for (i = 0; i < 10; i++)
	{
		xValue = 0.333 + i;
		cout.precision(3);
		cout << setw(19) << xValue;
		cout << setw(19) << mySum(xValue, 3);
		cout.unsetf(ios::fixed);
		cout.setf(ios::scientific);
		cout.precision(4);
		cout << setw(19) << 1 / mySum(xValue, 5);
		cout.unsetf(ios::scientific);
		cout.setf(ios::fixed);
		cout << setw(19) << mySum(xValue, 7);
		cout << endl;
	}

	system("pause");
	return 0;
}

double mySum(double X, unsigned int N)
{
	if (N == 0)
	{
		return X;
	}
	else
	{
		// Sum of X to X + 3 => X + (X+1) + (X+2) + (X+3)
		return (X + N) + mySum(X, N - 1);
	}
}