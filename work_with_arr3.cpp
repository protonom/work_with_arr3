#include <iostream>

void fill_arr(int* arr, int size) 
{
	int i = 0;
	for (i; i < size; i++) 
	{
		arr[i] = i * 5 + 100;
	}
}


void show_arr(int* arr, int size) 
{
	int i = 0;
	for (i; i < size; i++) 
	{
		std::cout << arr[i] << ", ";
	}
}


int main()
{
	const int size = 20;
	int arr[size];
	fill_arr(arr, size);
	show_arr(arr, size);
	
}

