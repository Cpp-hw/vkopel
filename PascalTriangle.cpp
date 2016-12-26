#include <iostream>
using namespace std;


void PascalTriangle(int rows)
{
	int  bin = 1;
	for (int i = 0; i < rows; i++)
	{
		for (int space = 1; space <= rows - i; space++)
			cout << "  ";
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || i == 0)
				bin = 1;
			else
				bin = bin*(i - j + 1) / j;
			cout << "    " << bin;
		}
		cout << endl;
	}
}

//int main()
//{
//	int rows = 0;
//	cout << "Please input count of rows:" << endl;
//	cin >> rows;
//	PascalTriangle(rows);
//	return 0;
//}