#include "Menu.h"


Menu::Menu(){ }
Menu::~Menu() {}

void Menu::Menu_()
{
	char key;
	bool exitProgram = false;
	while (!exitProgram)
	{
		cout << "Make choice:\n" << "0 - exit; 1 - view height of prism;\n"
			<< "2 - view num of grains; 3 -view base of prism;\n"
			<< "4 - view length of side; 5 - view volume of prism\n"
			<< "6 - set prism height; 7 - set legth side;\n"
			<< "8 - set num of grains; 9 - set base square;\n";
		cin >> key;
		switch (key)
		{
		case '0':
			exitProgram = true;
			break;
		case '1':
			cout << "Height = " << prism.GetHeight() << '\n';
			break;
		case '2':
			cout << "Num of grains = " << prism.GetNumGrain() << '\n';
			break;
		case '3':
			cout << "Base = " << prism.GetBase() << '\n';
			break;
		case'4':
			cout << "Length of side = " << prism.GetLengthSide() << '\n';
			break;
		case'5':
			cout << "Volume = " << prism.GetVol() << '\n';
			break;
		case'6':
		{   double height;
		cout << "Enter height: ";
		cin >> height;
		prism.SetHeight(height);
		break;
		}
		case '7':
		{   double length;
		cout << "Enter length: ";
		cin >> length;
		prism.SetLength(length);
		break;
		}
		case '8':
		{
			size_t num;
			cout << "Enter num of grains: ";
			cin >> num;
			prism.SetNumberGrain(num);
			break;
		}
		case '9':
		{
			double base;
			cout << "Enter base: ";
			cin >> base;
			prism.SetBase(base);
			break;
		}
		}

	}
}