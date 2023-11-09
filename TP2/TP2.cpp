

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
	cout << "Input the length of containers" << endl;
	cin >> k;
	cls();
	//тут будет объект класса
	k = 0;
	men();
	//вывод в консоль
	while (choice != 6)
	{
		cin >> choice;
		cls();
		switch (choice)
		{
		case 1: //////////////////////////////Open list menu
		{
			k = 0;
			disp();
			//показать
			while (k != 3)
			{
				cin >> k;
				switch (k)
				{
				case 1:////Add element
					cls();
					disp();

					cls();
					disp();

					break;
				case 2://///Remove element
					cls();
					disp();

					cls();
					disp();

					break;
				case 3:///To main menu
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
		case 2: //////////////////////////////Open deck menu
		{
			k = 0;
			disp();
			//показать
			while (k != 3)
			{
				cin >> k;
				switch (k)
				{
				case 1:////Add element
					cls();
					disp();
					cls();

					cls();
					disp();

					break;
				case 2://///Remove element
					cls();
					disp();
					cls();

					cls();
					disp();

					break;
				case 3:///To main menu
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
		case 3://////////////////////////////Open steck menu
		{
			k = 0;
			disp();
			//показать
			while (k != 3)
			{
				cin >> k;
				switch (k)
				{
				case 1:////Add element
					cls();
					disp();

					cls();
					disp();

					break;
				case 2://///Remove element
					cls();
					disp();

					cls();
					disp();

					break;
				case 3:///To main menu
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
		case 4:
		{
			cls();
			men();

			imp();
			break;
		}
		case 5:
		{
			cls();
			men();

			exp();
			break;
		}
		case 6:
		{
			cls();
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
	cout << "Menu:\n(1)List\n(2)Deck\n(3)Stack\n(4)Import file\n(5)Export file\n(6)Exit" << endl << endl;
}

void disp()
{
	cout << "(1)Add element\n(2)Remove element\n(3)Exit" << endl << endl;
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
