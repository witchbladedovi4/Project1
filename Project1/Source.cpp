#include <iostream>
#include <Windows.h>
int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int calc_num1;
	int calc_num2;
	char calc_art;
	while (true)
	{
		std::cout << "Певрое число = ";
		std::cin >> calc_num1;
		std::cout << "Второе число = ";
		std::cin >> calc_num2;
		std::cout << "Действие (+  -  /  *  %) ";
		std::cin >> calc_art;
		int otvet_calc_summa = (calc_num1 + calc_num2), otver_calc_raznost = (calc_num1 - calc_num2), otvet_calc_umnojenya = (calc_num1 * calc_num2);
		double double_calc_num1 = calc_num1, double_calc_num2 = calc_num2, procent = ((double_calc_num1 / 100) * double_calc_num2);
		if (calc_num2 != 0)
		{
			if (calc_art == '+')
			{
				std::cout << calc_num1 << " + " << calc_num2 << " = " << otvet_calc_summa << "\n";
			}
			else if (calc_art == '-')
			{
				std::cout << calc_num1 << " - " << calc_num2 << " = " << otver_calc_raznost << "\n";
			}
			else if (calc_art == '*')
			{
				std::cout << calc_num1 << " * " << calc_num2 << " = " << otvet_calc_umnojenya << "\n";
			}
			else if (calc_art == '/')
			{
			double otvet_deleniya = double_calc_num1 / double_calc_num2;
			std::cout << double_calc_num1 << " / " << double_calc_num2 << " = " << otvet_deleniya << "\n";
			}
			else if (calc_art == '%')
			{
				std::cout << calc_num2 << "% от числа " << calc_num1 << " = " << procent << "\n";
			}
			
		}
		else
		{
		std::cout << "Нельзя делить на ноль!" << "\n";
		}
	}
	return 0;
}