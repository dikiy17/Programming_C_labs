#include<cmath>
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	float a, b, alf, bet, c, d, z1, z2;
	cout << "Ввести альфа";
	cin >> alf;
	cout << "Ввести бета";
	cin >> bet;
	a = pow(cos(alf) - cos(bet), 2);
	b = pow(sin(alf) - sin(bet), 2);
	z1 = a - b;
	c = sin(pow((alf - bet) / 2, 2));
	d = cos(alf + bet);
	z2 = (-4) * c * d;
	cout << "z1=" << z1 << endl;
	cout << "z2=" << z2;
}
