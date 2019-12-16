
#include <iostream>
using namespace std;
void printArray(int* arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << &arr[i] << endl;
	}
}

int main()
{
	const int size = 4;
	int staticArray[size];//Creating one-dimensional static array
	int* dynamicArray = new int[size];//Creating one-dimensional dynamic array
	const int rows = 2;
	const int cols = 2;
	int static2array[rows][cols];//Creating two-dimensional static array
	int** dynamic2array = new int*[rows];//Crating two-dimensional dynamic array
	for (size_t i = 0; i < rows; i++)
	{
		dynamic2array[i] = new int[cols];
	}
	cout<<"One-dimensional static array: "<<endl;
	printArray(staticArray, size);
	cout << "One-dimensional dynamic array: " << endl;
	printArray(dynamicArray, size);
	cout << "Two-dimensional static array: " << endl;
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			cout << &(static2array[i][j]) << endl;
		}
	}
	cout << "Two-dimensional dynamic array: " << endl;
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			cout << &(dynamic2array[i][j]) << endl;
		}
	}

	for (size_t i = 0; i < rows; i++)
	{
		delete dynamic2array[i];
	}
	delete[] dynamic2array;
	return 0;
}