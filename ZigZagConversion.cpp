#include <iostream>
#include <string>
#include <vector>
using namespace std;


string ZigZag_Conversion(string s, int n)
{
	if (n <= 1)
	{
		return s;
	}

	vector<string> str(n);

	int row = 0, step = 1;
	for (int i = 0; i < s.length(); ++i)
	{
		str[row].push_back(s[i]);
		if (row == 0)
		{
			step = 1;
		}
		else if (row == n - 1)
		{
			step = -1;
		}
		row += step;
	}

	s.clear();
	for (int j = 0; j < n; ++j)
	{
		s.append(str[j]);
	}
	return s;
}









//int main()
//{
//	string str;
//	int n;
//	cout << "Please input str for check:" << endl;
//	cin >> str;
//	cout << "Please input deep:" << endl;
//	cin >> n;
//	cout << "Resualt: " << ZigZag_Conversion(str, n) << endl;
//
//	return 0;
//}