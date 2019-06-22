#include "DEQUEARRAY.h"
#include <iostream>
using namespace std;
bool DEQUEARRAY::isempty()
{
	if (n == 0)
	{
		return true;
	}

	else
	{
		return false;
	}

}
void DEQUEARRAY::add_at_start(int x)

{
	if (isfull())
		doublethesize();
	else if (n == 0)
	{
		front++;
		rear++;
		ARRAY[rear] = x;
		n++;
	}
	else
	{
		for (int j = n; j >0; j--)
		{
			ARRAY[j] = ARRAY[j - 1];
		}
		rear++;
		n++;
		ARRAY[front] = x;
	}
}

bool DEQUEARRAY::isfull()
{
	if (n == size)
		return true;
	else
		return false;
}
void DEQUEARRAY::show()
{
	for (int i = 0; i < n; i++)

	{
		cout << ARRAY[i] << endl;
	}
}
void DEQUEARRAY::doublethesize()
{
	size = size * 2;
	int* RS = new int[size];
	for (int i = 0; i < n; i++)
		RS[i] = ARRAY[i];
	ARRAY = RS;
}
void DEQUEARRAY::add_at_end(int x)
{
	if (isfull())
	{
		doublethesize();
	}
	if (isempty())
	{
		front++;
		rear++;
		ARRAY[rear] = x;
		n++;
	}
	else
		rear = rear + 1;
	ARRAY[rear] = x;
	n++;

}
int DEQUEARRAY::arraysize()
{
	cout << "size of array.." << size;
	return size;
}
void DEQUEARRAY::delete_from_start()
{
	 if (n == 0)
		cout << "ARRAY IS ALREADY EMPTY";
	else
	{
		n--;
		for (int i = 0; i < n; i++)
		{
			ARRAY[i] = ARRAY[i + 1];
		}
		cout << "number of element.." << n << endl;
	}
	 if (n <= size / 4)
		 halfthesize();

}
void DEQUEARRAY::halfthesize()
{
	int* RS = new int[size];
	size = size / 2;
	for (int i = 0; i < n; i++)
		RS[i] = ARRAY[i];
	ARRAY = RS;
}
void DEQUEARRAY::delete_from_end()
{
	
	 if (n == 0)
		cout << "array is already empty";
	else
	{
		n--;
		ARRAY[rear] = 0;
		rear--;
	}
	 if (n <= (size / 4))
		 halfthesize();
}
