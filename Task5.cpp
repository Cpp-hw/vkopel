#include <iostream>
using namespace std;


bool Task5(int m, int n, int k, int l)
{
	if ((m + n + k + l) % 2==0)
	{
		return 1;
	}
	else return 0;
     
}

int main()
{
	int m, n, k, l;
	cout << "Please input pair<m,n>: " << endl;
	cin >> m >> n;
	cout << "Please input pair<k,l>: " << endl;
	cin >> k >> l;
	cout<<"Resualt: "<<Task5(2,2,4,4)<<endl;

	return 0;
}