

#include <list>
#include <iostream>
#define cles 1
using namespace std;

void menu();
void cls();
void men();
void disp();
void inc();
void imp();
void exp();


int main(void)
{
	menu();
	return 0;
}

void menu()
{
	int choice = 0;
	int k = 0;
	cls();
	//тут будет объект класса
	k = 0;
	men();
	//вывод в консоль
	while (choice != 3)
	{
		cin >> choice;
		cls();
		switch (choice)
		{
		case 1: //////////////////////////////Open aeroflot
		{
			k = 0;
			disp();
			//показать
			while (k != 5)
			{
				cin >> k;
				switch (k)
				{
				case 1:////Add element
					cls();
					disp();

					break;
				case 2://///Remove element
					cls();
					disp();

					break;

				case 3:///Show all flights
					cls();
					disp();

					break;
				case 4:///Show flights flown by this type of plane
					cls();
					disp();

					break;
				case 5:///To main menu
					cls();
					men();

					break;
				default:
					cls();
					disp();

					inc();
					break;
				}
			}
			break;
		}
		case 2: //////////////////////////////Output edited text from file
		{
			cls();
			men();
			break;
		}
		case 3://////////////////////////////Exit
		{
			cls();
			men();
			break;
		}
		default:
		{
			cls();
			men();

			inc();
			break;
		}
		}
	}
}

void men()
{
	cout << "Menu:\n(1)Aeroflot\n(2)Output text from file\n(3)Exit"<< endl;
}

void disp()
{
	cout << "(1)Add element\n(2)Remove element\n(3)Show all flights\n(4)Show flights flown by the type of plane\n(5)To menu" << endl << endl;
}

void cls()
{
	if (cles)
		system("cls");
}

void elad()
{
	cout << "Element added!\n";
}

void elre()
{
	cout << "Element removed!\n";
}

void inc()
{
	cout << "Incorrect input!\n" << endl;
}

void imp()
{
	cout << "File imported!\n" << endl;
}

void exp()
{
	cout << "File exported!\n" << endl;
}
