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
	if ((login != "alimpopa") && (pas != "pas22pas"))
	{
		std::cout << "\nНе правильно введен логин и пароль\n";
	}
	else if (login != "alimpopa")
	{
		std::cout << "Не правильно введет логин";
	}
	else if (pas != "pas22pas")
	{
		std::cout << "Не правильно введет пароль";
	}
	else
	{
		std::cout << "фывфыфывфыв  фыв фыв фффв";
	}
	return 0;
}