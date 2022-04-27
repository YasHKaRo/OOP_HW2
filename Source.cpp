#include "Header.h"

void invert(int* data, int size)
{
	int t = 0;
	for (int i = 0; i < size; i++)
	{
		for (int k = 9; k > 0; k--)
		{
			t = data[k];
			data[k] = data[i];
			data[i] = t;
		}
	}
}

void decreas(int* data, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int t = i;
		for (int index = i + 1; index < size; index++)
		{
			if (data[index] < data[t])
			{
				t = index;
			}
		}
		swap(data[i], data[t]);
	}
}
void increasing(int* data, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int t = i;
		for (int index = i + 1; index < size; index++)
		{
			if (data[index] > data[t])
			{
				t = index;
			}
		}
		swap(data[i], data[t]);
	}
}
int sum(int* data, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += data[i];
	}
	return sum;

}


void (*arr(int* data, int size))(int* data, int size)
{
	if (sum(data, size) == data[0])
	{
		return invert;
	}
	else if (sum(data, size) > data[0])
	{
		return increasing;
	}
	else
	{
		return decreas;
	}
}
