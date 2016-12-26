#include <iostream>
using namespace std;



void Task7()
{

	cout << "Please input symbols: " << endl;

	char symbol=NULL;
	int digit_count = 0;
	int letter_count = 0;

	while (symbol != '$')
	{
		cin >> symbol;
		if (symbol >= 48 && symbol <= 57)
		{
			digit_count++;
		}
		if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z'))
		{
			letter_count++;
		}
	}
	cout << "DigitCount: " << digit_count << " LetterCount: " << letter_count << endl;


}


int main()
{
	Task7();

	return 0;
}
