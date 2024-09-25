#include <iostream>
#include <Windows.h>
int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int sum_all = 0;
	int sum_chet = 0;
	int sum_nechet = 0;
	int num;
	while (true)
	{
		std::cout << "Введите число: \n";
		std::cin >> num;
		if (num == 0)
		{
			break;
		}
		else if (num % 2 == 0)
		{
			sum_chet += num;
		}
		else if (num % 2 != 0)
		{
			sum_nechet += num;
		}
		sum_all += num;
	}
	std::cout << "Четные - " << sum_chet << "\n";
	std::cout << "Нечетные - " << sum_nechet << "\n";
	std::cout << "Сумма всех - " << sum_all << "\n";

	return 0;
}