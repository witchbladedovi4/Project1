#include <iostream>
#include <Windows.h>
#include <cstdlib>
int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int const SIZE = 10;
	int arr1[SIZE]{}, arr2[SIZE]{};
	int a{}, k{};
	for (size_t i = 0; i < SIZE; i++)
	{
		arr1[i] = std::rand() % 11;
	}
	for (size_t i = 0; i < SIZE; i++)
	{
		std::cout << "������� ����� �� 1 �� 10 " << "\n";
		std::cin >> a;
		if (a >= 0 and a <= 10) 
		{
			arr2[i] = a;
		}
		else
		{
			std::cout << "������ ����";
			return 0;
		}
		
	}
	for (size_t i = 0; i < 10; i++)
	{
		
		if (arr1[i] == arr2[i])
		{
			k += 1;
		}
	}
	std::cout << "��������� ������\n";


	for (size_t i = 0; i < 10; i++)
	{
		std::cout << arr1[i] << " ";
	}


	std::cout << "\n\n\n\n\n";
	std::cout << "��� ������\n";


	for (size_t i = 0; i < 10; i++)
	{
		std::cout << arr2[i] << " ";
	}
	if (k > 0)
	{
		std::cout << "\n������ �";
		std::cout << std::string(k, '�');
		std::cout << "�\n������ " << k << " ���";
	}
	else
	{
		std::cout << "\n������ �������� �������� � ���� ���������";
	}
	return 0;
}