#include <iostream>
using namespace std;




void Task4()
{
	char symbol = NULL;

	cout << R"("Please start input (if you want exit type '@' and press 'ENTER'")";
	while (symbol != '@')
	{
		cin >> symbol;
		if (symbol != 'A'&&symbol != 'a')
			cout << symbol;

	}

}


int main()
{

	Task4();


	system("pause");
	return 0;
}
