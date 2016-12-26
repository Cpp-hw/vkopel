#include <iostream>
using namespace std;


void Menu()
{
	cout << "Hi, i am C++ calc!!!" << endl;

	cout << "I know how to do such actions:" << endl;
	cout << "a+b" << endl;
	cout << "a-b" << endl;
	cout << "a*b" << endl;
	cout << "a/b" << endl;


}

void Task12()
{

	double a, b;
	char operation = NULL;
	double resualt;

	Menu();
	cout << "Please input a operation b" << endl;
	bool start = true;
	while (start!=false)
	{
		cin >> a >> operation >> b;
		switch (operation)
		{
		case '+':
			resualt = a + b;
			cout << "Sum a+b: " << resualt << endl;
			break;
		case '-':
			resualt = a - b;
			cout << "Substraction a-b: " << resualt << endl;
			break;
		case '/':
			if (b == 0)
			{
				cout << "You can not divide by 0" << endl;
			}
			resualt = a / b;
			cout << "Division a/b: " << resualt << endl;
			break;
		case '*':
			resualt = a*b;
			cout << "Prod a*b: " << resualt << endl;
			break;
		default:
			exit(0);
			break;
		}
		cout << "You want continue: (1 - yes, 0 - no)" << endl;
		cin >> start;
	}
}

int main()
{

	Task12();
	system("pause");
	return 0;
}