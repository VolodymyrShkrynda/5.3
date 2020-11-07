#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double h(const double x);
int main() {
	double rp, rk, z;
	int n;
	cout << "rp = "; cin >> rp;
	cout << "rk = "; cin >> rk;
	cout << "n = "; cin >> n;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "r" << " |"
		<< setw(7) << "z" << " |" << endl;
	cout << "---------------------------" << endl;
	double dr = (rk - rp) / n;
	double r = rp;
	while (r <= rp)
	{
		z = h(1 + sqrt(r)) + pow(h(r), 2);
		cout << "|" << setw(7) << setprecision(2) << r
			<< " |" << setw(10) << setprecision(3) << z
			<< " |" << endl;
		r += dr;
	}
	return 0;
}
double h(const double x) {
	if (abs(x) >= 1)
		return((1 + cos(x)) / (exp(-2 * x)));
	else {
		double S = 0;
		int n = 0;
		double a = 1;
		S = a;
		do {
			n++;
			double R = x * x * x / ((3 * n + 1) * (3 * n) * (3 * n - 1));
			a *= R;
			S += a;
		} while (n < 5);
		return S;
	}
}