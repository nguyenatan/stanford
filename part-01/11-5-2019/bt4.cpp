#include <iostream>
#include <cmath>

using namespace std;

// ax*x + bx + c = 0
void calQuadraticEquation(double a, double b, double c)
{
	if (!a && !b) {
		cout << "Phuong trinh vo nghiem.\n";
		return;
	}
	
	if (!a) {
		cout << "Phuong trinh co 1 nghiem = " << -c / b << '\n';
		return;
	}
	
	double delta = b * b - 4 * a * c;
	
	if (delta < 0) {
		cout << "Phuong trinh vo nghiem.\n";
		return;
	}
	
	double x1 = (-b + sqrt(delta)) / (2 * a);
	double x2 = (-b - sqrt(delta)) / (2 * a);
	
	cout << "Phuong trinh co 2: x1 = " << x1 << '\n';
	cout << "                   x2 = " << x2 << '\n';
}

int main()
{
	cout << "ax*x + bx + c = 0\n\n";
	
	double a, b, c;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	cout << "Nhap c: "; cin >> c;
	
	calQuadraticEquation(a, b, c);
	
	return 0;
}
