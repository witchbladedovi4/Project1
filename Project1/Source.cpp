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
		std::cout << "������� � ��� ������ ? \n";
		std::cin >> rub;
		int choice{};
		double commission_rub = commission * 100 % rub;
		double rub_s_com = rub - commission_rub;

		std::cout << "\n\n\n\n�������� ����� : \n";
		std::cout << "1)������ (92�) \n";
		std::cout << "2)���� (103�) \n";
		std::cout << "3)���� (13�) \n";
		std::cout << "4)����� (37�) \n";
		std::cout << "5)���� (0,6�) \n";
		std::cin >> choice;
		if (choice == 1)
		{
			int usd = 92;
			double trade_usd = rub_s_com / usd;
			std::cout << "�� �������� " << rub << "� �� " << trade_usd << "$ � ��������� 5%, ������� ��������� " << commission_rub << "�\n";
		}
		else if (choice == 2)
		{
			int eur = 103;
			double trade_eur = rub_s_com / eur;
			std::cout << "�� �������� " << rub << "� �� " << trade_eur << "���� � ��������� 5%, ������� ��������� " << commission_rub << "�\n";
		}
		else if (choice == 3)
		{
			int cny = 13;
			double trade_cny = rub_s_com / cny;
			std::cout << "�� �������� " << rub << "� �� " << trade_cny << "���� � ��������� 5%, ������� ��������� " << commission_rub << "�\n";
		}
		else if (choice == 4)
		{
			int farit = 37;
			double trade_farit = rub_s_com / farit;
			std::cout << "�� �������� " << rub << "� �� " << trade_farit << "������� � ��������� 5%, ������� ��������� " << commission_rub << "�\n";
		}
		else if (choice == 5)
		{
			double jpy = 0.6;
			double trade_jpy = rub_s_com / jpy;
			std::cout << "�� �������� " << rub << "� �� " << trade_jpy << "��� � ��������� 5%, ������� ��������� " << commission_rub << "�\n";
		}
		int end_choise{};
		std::cout << "��� ��� ?\n(1)��\n(2)���\n";
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
			std::cout << "�������� �����!";
			break;
		}
	}



	return 0;
}