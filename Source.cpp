#include <iostream>
#include <Windows.h>
int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
    int array[20];


    for (int i = 0; i < 20; ++i) {
        array[i] = std::rand() % (10 + 5 + 1) -5;
    }

    
    for (int i = 0; i < 20; ++i) 
    {
        if (i == 10)
        {
            std::cout << "\n";
        }
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;


	return 0;
}