#include <iostream>
#include <cmath>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, xp, xk, dx, R, y, q;
	q = 7;
	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "----------------------------" << endl;
	cout << "|" << setw(6) << "x" << setw(q) << "|"
		<< setw(7) << "y" << "     |" << endl;
	cout << "----------------------------" << endl;
	x = xp;


	while (x <= xk)
	{
		if (x <= -2)
			y = x + 3;
		else
			if (-2 < x && x <= 4)
				y = (-R * x) / 6 - R / 3 - x / 6 + 2 * R / 3;
			else
				if (4 < x && x <= 8 - R)
					y = -R;
				else
					if (8 - R < x && x <= 8 + R)
						y = sqrt(R * R - x * x + 16 * x - 64) - R;
					else
						y = -R;
		cout << "|" << setw(6) << setprecision(2) << x
			<< setw(q) << "| " << setw(7) << setprecision(2) << y
			<< "     |" << endl;
		x += dx;

	}
	cout << "----------------------------" << endl;



	system("pause");
	return 0;

}