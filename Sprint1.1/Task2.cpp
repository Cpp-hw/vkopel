#include <iostream>
#include <math.h>
using namespace std;




double Task2(int n)
{
double prod=1.0;

for(int i=1;i<n;++i)
{
prod*=(1+1/(4*sqrt(i)));

}
return prod;

}


int main()
{
	int n;
	cout << "Please input n: ";
	cin >> n;

	cout << "Resualt:" << Task2(n) << endl;

	return 0;
}