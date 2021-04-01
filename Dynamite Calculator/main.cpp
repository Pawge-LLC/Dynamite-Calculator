#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
	double a;
	double b;
	char op;
	while (true) {
		cout << "Dynamite Calculator \n";
		cout << "v1.2 \n";
		cin >> a >> op >> b;

		while (cin.fail()) {
			cin.clear();
			cin.ignore(100, '\n');
		}

		{
			switch (op)
			{
			case '+':
				cout << a + b << endl;
				break;
			case '-':
				cout << a - b << endl;
				break;
			case '*':
				cout << a * b << endl;
				break;
			case '/':
				cout << a / b << endl;
				break;
			case '^':
				cout << pow(a, b) << endl;
				break;
			case '`':
				cout << sqrt(a) << endl;
				break;
			case '#':
				cout << "01001100 01001111 01001100";
			default:
				break;
			}
		}
	}
}
