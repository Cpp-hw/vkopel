#include <iostream>
using namespace std;



double Task3(int n)
{
	double s = 0.0;
	for (int i = 1; i<n; ++i)
	{
		if (i % 3 == 0)
		{
			s += pow(i / 3,2);
		}
		else
		{
			s += pow((i / (i - 3)),2);
		}
	}
	return s;
}


int main()
{
	int i, k;
	cout << "Please input n:" << endl;
	cin >> n;

	cout << Task3(n) << endl;
	return 0;

}