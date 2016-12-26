#include <iostream>
using namespace std;


bool ValidRowsCols(int grid[][9])
{
	bool fail = 0;
	for (int i = 0; i < 9 && !fail; ++i) {
		int p[9] = {};
		int j;
		for (j = 0; j < 9 && !fail; ++j) {
			if (p[grid[i][j] - 1] == 0)
				p[grid[i][j] - 1] = 1;
			else
				fail = 1;
		}
	}
	for (int i = 0; i < 9 && !fail; ++i) {
		int p[9] = {};
		for (int j = 0; j < 9 && !fail; ++j) {
			if (p[grid[j][i] - 1] == 0)
				p[grid[j][i] - 1] = 1;
			else
				fail = 1;
		}
	}
	if (!fail) return true;
	else return false;

}
bool ValidSmallGrid(int grid[][9])
{
	bool fail = 0;

	for (int i = 0; i < 9 && !fail; i += 3)
	{
		for (int j = 0; j < 9 && !fail; j += 3)
		{
			int p[9] = {};
			for (int ik = i; ik < i + 3 && !fail; ++ik)
			{
				for (int jk = j; jk < j + 3 && !fail; ++jk)
				{
					if (p[grid[ik][jk] - 1] == 0)
						p[grid[ik][jk] - 1] = 1;
					else
						fail = 1;
				}
			}
			for (int k = 0; k < 9; ++k)
			{
				cout << p[k] << endl;
			}
		}
		
	}
	if (!fail) return true;
	else return false;
}

bool Check(int grid[][9])
{
	if (ValidRowsCols(grid) && ValidSmallGrid(grid))
	{
		return true;
	}
	else return false;
}





//int main()
//{
//	int grid[9][9] = {
//		{ 8,3,5,4,1,6,9,2,7 },
//		{ 2,9,6,8,5,7,4,3,1 },
//		{ 4,1,7,2,9,3,6,5,8 },
//		{ 5,6,9,1,3,4,7,8,2 },
//		{ 1,2,3,6,7,8,5,4,9 },
//		{ 7,4,8,5,2,9,1,6,3 },
//		{ 6,5,2,7,8,1,3,9,4 },
//		{ 9,8,1,3,4,5,2,7,6 },
//		{ 3,7,4,9,6,2,8,1,5 }
//	};
//
//	cout << "Resualt: " << boolalpha << Check(grid) << endl;
//	return 0;
//}