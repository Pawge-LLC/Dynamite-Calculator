#include <iostream>
using namespace std;
int main()
{
	double a;
	double b;
	char op;
	while (true) {
		cout << "Dynamite Calculator \n";
		cout << "snapshot 2021.02.09 \n";
		cin >> a >> op >> b;
		while (cin.fail()) {
			cin.clear();
			cin.ignore(100, '\n');

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
				default:
					break;
				}
			}
		}
	}
}