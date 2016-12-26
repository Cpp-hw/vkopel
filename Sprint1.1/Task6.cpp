#include <iostream>
using namespace std;



int Task6(int n, int *arr)
{
	int count = 0;
	for (int i = 0; i < n-1; ++i)
	{
		if ((arr[i] < 0) && (arr[i + 1] >= 0) || (arr[i] >= 0) && (arr[i + 1] < 0))
		{
			count++;
		}
	}
	return count;
}

int main()
{

	int n;
	int *arr;
	cout << "Please input count of number:" << endl;
	cin >> n;
	arr = new int[n];
	cout << "Please input: " << n << " numbers:" << endl;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cout << "The number of neighbors: " << Task6(n,arr) << endl;
	system("pause");
	return 0;
}