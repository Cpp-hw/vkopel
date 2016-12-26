#include <string>
#include <iostream>
using namespace std;


bool ValidPalindrome(string &s)
{
	if (equal(s.begin(), s.end(), s.rbegin()))
	{
		return true;
	}
	else
	{
		return false;
	}
}

//int main()
//{
//	string str;
//	cout << "Please input word for check:" << endl;
//	cin >> str;
//	cout << "Resualt: " <<boolalpha<< ValidPalindrome(str) << endl;
//	return 0;
//}