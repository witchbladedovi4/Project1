#include <iostream>
#include <Windows.h>


int RetunrnSum(int a , int b)
{
	return a + b;
}

int RetuntRaz(int a, int b)
{

	return a - b;
}

int ReturnUmn(int a, int b)
{
	return a * b;
}

int ReturnDel(int a, int b)
{
	if (b == 0)
	{
		std::cout << "NA 0 NE DELITTYA";
		return 0;
	}
	else
	{
		return a / b;
	}
	

}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char choise{};
	int a{};
	int b{};
	std::cout << "������� 1 �����\n";
	std::cin >> a;
	std::cout << "�������� �������� + - * /\n";
	std::cin >> choise;
	std::cout << "������� 2 �����\n"; 
	std::cin >> b;
	if (choise == '+')
		std::cout << RetunrnSum(a, b);
	if (choise == '-')
		std::cout << RetuntRaz(a, b);
	if (choise == '*')
		std::cout << ReturnUmn(a, b);
	if (choise == '/')
		std::cout << ReturnDel(a, b);
	
	return 0;
}