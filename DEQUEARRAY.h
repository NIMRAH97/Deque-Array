#pragma once
class DEQUEARRAY
{
	int size;
	int front, rear, n;
public:
	int* ARRAY = new int[size];
	DEQUEARRAY()
	{
		front = -1;
		rear = -1;
		n = 0;
		size = 2;
	}
	void add_at_start(int x);
	void add_at_end(int x);
	void delete_from_start();
	void delete_from_end();
	bool isempty();
	bool isfull();
	void doublethesize();
	void halfthesize();
	void show();
	int arraysize();
};

