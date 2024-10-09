#include <iostream>
#include <Windows.h>
#include <cstdlib>


void SetArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 27 - 8;
	}
}
 void PrintArr(int arr[], int size)
 {
	 for (int i = 0; i < size; i++)
	 {
		 std::cout << arr[i] << " ";
	 }
	 std::cout << "\n";
 }
 void MaxArr(int arr[], int size)
 {
	 int max = -123;
	 int i_max{};
	 for (int i = 0; i < size; i++)
	 {
		 if (arr[i] > max) 
		 {
			 max = arr[i];
			 i_max = i+1;
		 } 
	 }
	 std::cout << "Max = " << max << " Pod nomerom " << i_max << "\n";
 }
 void MinArr(int arr[], int size)
 {
	 int min = 123;
	 int i_min{};
	 for (int i = 0; i < size; i++)
	 {
		 if (arr[i] < min) 
		 {
			 min = arr[i];
			 i_min = i+1;
		 }
	 }
	 std::cout << "Min = " << min << " Pod nomerom " << i_min << "\n";
 }

int main()
{	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int size = 20;
	int arr[size];
	SetArr(arr, size);
	PrintArr(arr, size);
	MaxArr(arr, size);
	MinArr(arr, size);
	return 0;
}