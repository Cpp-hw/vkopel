#include <iostream>
using namespace std;



void Task10(int x)
{
    
    int s = ((x>=-1)&&(x<=1)) || ((x>=2)&&(x<=5)) ? 1:0;
	cout << "S: " << s << endl;
}


int main()
{
	int x;
	cout << "Please input x: " << endl;
	cin >> x;
	Task10(x);

	return 0;
}