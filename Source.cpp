#include <iostream>
#include <Windows.h>
#include <cstdlib>

void Arr(int* arr, int size) 
{
    std::cout << "Массив int: ";
    for (int i = 0; i < size; ++i) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void Arr(float* arr, int size)
{
    std::cout << "Массив float: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void Arr(char* arr, int size)
{
    std::cout << "Массив char: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}


int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int intArray[5] = { 1, 2, 3, 4, 5 };
    float floatArray[5] = { 1.2f, 5.2f, 1.6f, 6.2f, 8.3f };
    char charArray[5] = { 'a', 's', '2', 'x', 'd'};

    Arr(intArray, 5);
    Arr(floatArray, 5);
    Arr(charArray, 5);

    return 0;
}