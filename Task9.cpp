#include <iostream>
using namespace std;



bool Task9(int m,int n,int k,int l)
{
	if (m == k || n == l || abs(m - k) == abs(n - l))
	{
		cout << "danger!";
		return true;
	}
	else
	{
		cout << "no danger";
		return false;
	}
}

int main()
{

	int m, n, k, l;
	cout << "Please input pair<m,n>: " << endl;
	cin >> m >> n;
	cout << "Please input pair<k,l>: " << endl;
	cin >> k >> l;

	cout << "Resualt: " << Task9(m, n, k, l) << endl;
	return 0;
}

