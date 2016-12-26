#include <iostream>
#include <ctime>
using namespace std;



void drawTriangle(int** triangle, int length)
{
	for (int i = 0; i < length; i++)
	{
		
		for (int j = 1; j < length - i; ++j)
		{
			cout << " " << endl;
		}
		for (int k = 0; k <= i; k++)
		{
			cout << triangle[i][k] << " ";
		}
		cout << endl;
	}
}

void TriangleAlgo(int height)
{
	int** tmp = new int*[height];

	for (int i = 0; i < height; i++)
	{
		tmp[i] = new int[height];
	}
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			tmp[i][j] = rand()%10;
		
		}

	}
	drawTriangle(tmp, height);

	int sum = 0;

	for (int i = height - 2; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			if (tmp[i + 1][j] < tmp[i + 1][j + 1])
			{
				tmp[i][j] += tmp[i + 1][j];
			}
			else
			{
				tmp[i][j] += tmp[i + 1][j + 1];
			}
		}
	}

	sum = tmp[0][0];
	cout << "Sum: " << sum << endl;


	for (int i = 0; i < height; i++)
	{
		delete[] tmp[i];
	}
	delete[] tmp;


}


int main()
{
	srand(unsigned(time(0)));
	int height;
	cout << "Please input height of triangle:" << endl;
	cin >> height;
	TriangleAlgo(height);
	system("pause");
	return 0;
}