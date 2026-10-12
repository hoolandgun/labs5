#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void S(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);
#ifndef LINK_TEST
int main()
{
	double xp, xk, x, dx, eps, s = 0;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "------------------------------------" << endl;
	cout << "|" << setw(5) <<"x" << " |"
		<< setw(10) << "Arcth(x)" << " |"
		<< setw(7) <<"S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		S(x, eps, n, s);
		double Arcth = 0.5 * log((x + 1.0) / (x - 1.0));
		cout << "|" << setw(5) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << Arcth << " |"
			<< setw(7) << setprecision(5) << s << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "------------------------------------" << endl;
	return 0;
}
#endif
void S(const double x, const double eps, int& n, double& s)
{
	n = 0; 
	double a = 1. / x; 
	s = a;
	do {
		n++;
		A(x, n, a);
		s += a;
	} while (fabs(a) >= eps);
}
void A(const double x, const int n, double& a)
{
	double R = (2.0 * n - 1.0) / ((2.0 * n + 1.0) * x * x);
	a *= R;
}