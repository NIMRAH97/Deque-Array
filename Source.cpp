#include<iostream>
#include"DEQUEARRAY.h"
using namespace std;
void main()
{
	DEQUEARRAY obj;
	int option;

	do
	{
		cout << "              Please press 1 to add at start " << endl;
		cout << "              Please press 2 to add at end " << endl;
		cout << "              Please press 3 delete form start " << endl;
		cout << "              Please press 4 delete form end " << endl;
		cout << "              Please press 5 to check the size of array " << endl;
		cout << "              Please press 6 to display " << endl;
		cout << "----------------------------------------------------------------------------------------------" << endl;
		cin >> option;
		cout << "selected option is " << option << endl;
		if (option == 1)
		{
			int num;
			cout << "please enter your array element  ";
			cin >> num;
			obj.add_at_start(num);

		}
		else if (option == 2)
		{
			int num;
			cout << "enter number ";
			cin >> num;
			obj.add_at_end(num);
		}
		else if (option == 3)
		{

			obj.delete_from_start();
		}
		else if (option == 4)
		{
			obj.delete_from_end();

		}
		else if (option == 5)
		{
			obj.arraysize();
		}
		else if (option == 6)
		{
			obj.show();
		}
		else
			cout << "please enter a valid choice";
	} while (option != 7);
	system("pause");
}


