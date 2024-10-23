#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <string>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Логин: ";
	std::string login;
	std::string pas;
	std::getline(std::cin, login, '\n');
	std::cout << "\nПароль: ";
	std::getline(std::cin, pas, '\n');
	if (login.length() > 15 || pas.length() > 15)
	{
		std::cout << "limit err";
	}
	else if ((login != "alimpopa") || (pas != "pas22pas"))
	{
		std::cout << "\nwrong pas/log\n";
	}
	else
	{
		std::cout << "Welcome";
	}
	return 0;
}
