#include <iostream>
using namespace std;



void Task15()
{
	int n;
	int sum = 0;

	cout << "Please, input n: ";
	cin >> n;

	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	cout << "sum = " << sum << endl;
}

int main()
{

	Task15();
	return 0;
}