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
		std::cout << "Введите число от 1 до 10 " << "\n";
		std::cin >> a;
		if (a >= 0 and a <= 10) 
		{
			arr2[i] = a;
		}
		else
		{
			std::cout << "Анлаки броу";
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
	std::cout << "рандомный массив\n";


	for (size_t i = 0; i < 10; i++)
	{
		std::cout << arr1[i] << " ";
	}


	std::cout << "\n\n\n\n\n";
	std::cout << "Ваш массив\n";


	for (size_t i = 0; i < 10; i++)
	{
		std::cout << arr2[i] << " ";
	}
	if (k > 0)
	{
		std::cout << "\nЛучший Й";
		std::cout << std::string(k, 'О');
		std::cout << "У\nУгадал " << k << " раз";
	}
	else
	{
		std::cout << "\nВидимо наводчик кантужен и ноль попаданий";
	}
	return 0;
}