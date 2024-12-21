#include <iostream>
#include <ctime>

void fill_arr(int* arr, int size) 
{
	srand(time(NULL));
	int i = 0;
	for (i; i < size; i++) 
	{
		arr[i] = rand() % 100;
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

