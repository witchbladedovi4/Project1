#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <string>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "�����: ";
	std::string login;
	std::string pas;
	std::getline(std::cin, login, '\n');
	std::cout << "\n������: ";
	std::getline(std::cin, pas, '\n');
	if ((login != "alimpopa") && (pas != "pas22pas"))
	{
		std::cout << "\n�� ��������� ������ ����� � ������\n";
	}
	else if (login != "alimpopa")
	{
		std::cout << "�� ��������� ������ �����";
	}
	else if (pas != "pas22pas")
	{
		std::cout << "�� ��������� ������ ������";
	}
	else
	{
		std::cout << "�����������  ��� ��� ����";
	}
	return 0;
}