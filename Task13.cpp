#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>  
using namespace std;


void Task13()
{
	double x=0;
	double z;
	while (x >= -0.4 && x <= 1.4)
	{
		if (x <= 0.5)
		{
		
			z = sin(M_PI / 2);
			cout << "Value of the function(x<=0,5): " << z << endl;

		}
		else
		{
			z = sin((x - 1)*M_PI_2);
			cout << "Value of the function(x>0,5): "<<z << endl;
		}
		x += 0.1;
	}
}

int main()
{
	Task13();
	return 0;

}