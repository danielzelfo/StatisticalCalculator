/*  Program: Statisitical Calculator
Author: Daniel Zelfo
Class: CSCI 110

I certify that the code below is my own work.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//prototypes
void displayOriginal(double data[], int size);
void bubbleSort(double data[], int size);
void swap(double *a, double *b);
void displayDescending(double data[], int size);

int main()
{
	const int size = 10;
	double data[size] = { 1.0, 2.1, 3.2, 4.3, 5.4, 4.5, 3.4, 2.3, 1.2, 0.1 };
	cout << fixed << showpoint << setprecision(1);
	displayOriginal(data, size);
	bubbleSort(data, size);
	displayDescending(data, size);
	cout << "Maximum: " << data[size - 1];

	return 0;
}

void displayOriginal(double data[], int size)
{
	cout << "Original Data:\n";
	for (int i = 0; i < size; i++)
	{
		cout << data[i] << " ";
		if ((i + 1) % 5 == 0)
			cout << endl;
	}
	cout << endl;
}

void bubbleSort(double data[], int size)
{
	int i, j;
	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - i - 1; j++)
			if (data[j] > data[j + 1])
				swap(&data[j], &data[j + 1]);
}

void swap(double *a, double *b)
{
	double temp = *a;
	*a = *b;
	*b = temp;
}

//data must be sorted
void displayDescending(double data[], int size)
{
	cout << "Data is Descending Order:\n";
	for (int i = size - 1; i >= 0; i--)
	{
		cout << data[i] << " ";
		if ((10 - i) % 6 == 0)
			cout << endl;
	}
	cout << endl;
}
