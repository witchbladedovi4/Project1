#include <iostream>
#include <Windows.h>
int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int rub{};
	int commission = 5;
	while (true)
	{
		std::cout << "Сколько у вас рублей ? \n";
		std::cin >> rub;
		int choice{};
		double commission_rub = commission * 100 % rub;
		double rub_s_com = rub - commission_rub;

		std::cout << "\n\n\n\nКонветор валют : \n";
		std::cout << "1)Доллар (92р) \n";
		std::cout << "2)Евро (103р) \n";
		std::cout << "3)Юань (13р) \n";
		std::cout << "4)Фарит (37р) \n";
		std::cout << "5)Йена (0,6р) \n";
		std::cin >> choice;
		if (choice == 1)
		{
			int usd = 92;
			double trade_usd = rub_s_com / usd;
			std::cout << "Вы обменяли " << rub << "р На " << trade_usd << "$ С коммисией 5%, которая составила " << commission_rub << "р\n";
		}
		else if (choice == 2)
		{
			int eur = 103;
			double trade_eur = rub_s_com / eur;
			std::cout << "Вы обменяли " << rub << "р На " << trade_eur << "евро С коммисией 5%, которая составила " << commission_rub << "р\n";
		}
		else if (choice == 3)
		{
			int cny = 13;
			double trade_cny = rub_s_com / cny;
			std::cout << "Вы обменяли " << rub << "р На " << trade_cny << "юань С коммисией 5%, которая составила " << commission_rub << "р\n";
		}
		else if (choice == 4)
		{
			int farit = 37;
			double trade_farit = rub_s_com / farit;
			std::cout << "Вы обменяли " << rub << "р На " << trade_farit << "фаритов С коммисией 5%, которая составила " << commission_rub << "р\n";
		}
		else if (choice == 5)
		{
			double jpy = 0.6;
			double trade_jpy = rub_s_com / jpy;
			std::cout << "Вы обменяли " << rub << "р На " << trade_jpy << "йен С коммисией 5%, которая составила " << commission_rub << "р\n";
		}
		int end_choise{};
		std::cout << "Еще раз ?\n(1)ДА\n(2)НЕТ\n";
		std::cin >> end_choise;
		if (end_choise == 1)
		{
			continue;
		}
		else if (end_choise == 2)
		{
			break;
		}
		else
		{
			std::cout << "Невырный выбор!";
			break;
		}
	}



	return 0;
}