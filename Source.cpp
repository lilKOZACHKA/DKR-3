#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

long double f(long double x) {
	long double ff = 1*pow(x, 3)+(-2)*sqrt(x)+(-4)*x+(16);
	return ff;
}

long double f2(long double x) {
	long double ff = 1*x*pow(x, 4)/4+(-2)*x*pow(x, 3)/x+(-4)*x*sqrt(x)/2+(16)*x;
	return ff;
}

void end() {
	cout << endl;
	cout << endl;
}

void cocoos() {
	long double a, b, n, x;
	cout << "������� ����� ����� (a): ";
	cin >> a;
	cout << "������� ������ ����� (b): ";
	cin >> b;
	cout << "������� ���-�� ������������� ������ ������� �������������� (n): ";
	cin >> n;

	long double h = (b - a) / n;
	x = a + h;
	long double S = 0, S2 = 0;
	for (int i = 1; i < n; i++) {
		S += f(x);
		x += h;
	}
	x = 0;
	x = a + h;
	S *= h;
	cout << "������� �������� c ��������� �����: " << S << endl;

	for (int i = 1; i < n; i++) {
		S2 += f2(x);
		x += h;
	}
	S2 *= h;
	cout << "������� ������ ��������: " << S2 << endl;

	long double cocos;
	cocos = S2 - S;
	cout << "�����������: " << cocos;
}
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "|-------------------------------------------------------|" << endl;
	cout << "|               Dimitradon entertaiment		        |" << endl;
	cout << "|-------------------------------------------------------|" << endl;
	cout << "������� ������ �� ���������� �����:" << endl;
	cout << "  [1] - ����� �� ������ � ����� �������� � ������������" << endl;
	cout << "  [esc] - ����� �� ���������" << endl;

	do { // ���� ���� �������� �� ������� ������ �����������
		switch (_getch())
		{
		case '1': {
			cocoos();
			end();
		}
		default:
			break;
		}
	} while (_getch() != 27);
	return 0;
}