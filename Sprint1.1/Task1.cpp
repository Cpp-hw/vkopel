#include <iostream>
using namespace std;




//Solution 1

//void swap(int &a, int &b)
//{
//a+=b;
//b=a-b;
//a-=b;
//}

//Solution 2
void swap(int &a, int &b)
{
	a ^= b ^= a ^= b;
}





int main()
{

	int a, b;

	cout << "Please input a and b:" << endl;
	cin >> a >> b;
	cout << "a: " << a << " b: " << b << endl;
	swap(a, b);
	cout << "a: " << a << " b: " << b<<endl;
	return 0;
}