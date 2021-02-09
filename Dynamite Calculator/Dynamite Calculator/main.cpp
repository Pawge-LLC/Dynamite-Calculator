#include <iostream>
using namespace std;
int main()
{
	double a;
	double b;
	char op;
	while (true) {
		cout << "Dynamite Calculator \n";
		cout << "v1.0 \n";
		cin >> a >> op >> b;
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
				cout << "Error \n";
			}
		}
	}
}