#include <iostream>
using namespace std;



double Task14()
{
	double x,y_i, new_y = 0;
	cout << "Please input x: " << endl;
	cin >> x;
	y_i = x;
	


	while (true)
	{
		new_y = 0.5*(y_i + (x / y_i)); 
		if (abs((y_i)-(new_y - 1)) <= 10e-5)
		{
			break; 
		}
		else
		{
			y_i =new_y;
		}
	}
	
	return y_i;
}

int main()
{

	cout << "Root= :" << Task14()<<endl;
	system("pause");
	return 0;
}