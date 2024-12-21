#include <iostream>

void fill_arr(int* arr, int size) {
	int i = 0;
	for (i; i < size; i++) {
		arr[i] = i + 1;
	}
}
void show_arr(int* arr, int size) {
	int i = 0;
	for (i; i < size; i++) {
		std::cout << arr[i];
	}
}

int main()
{
	const int size = 10;
	int arr[size];
	fill_arr(arr, size);
	show_arr(arr, size);
}

