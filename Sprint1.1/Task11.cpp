#include <iostream>
using namespace std;



void Task11(int n)
{
	for (int i = n-1; i>0; i--)
	{

		if (n%i == 0)
		{
			cout << i << " ";
		}
	}
}


int main()
{

	Task11(25);
	return 0;
}