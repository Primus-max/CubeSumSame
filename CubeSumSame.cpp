// Пользователь вводит целое число А. Программа должна
// определить, что куб суммы цифр этого числа равен А* А.
//

#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
using namespace std;

/// <summary>
/// Метод расчёта куба суммы цифр
/// </summary>
/// <param name="userInput"></param>
/// <returns></returns>
int CalcCubSum(int userInput) 
{
    int result = 0;

    while (userInput > 0)
    {
        int digit = userInput % 10;

        result += digit;

        userInput /= 10;
    }

    return pow(result, 3); // Или конечно без библиотеки это будет result * result * result
}

/// <summary>
/// Метод вывода итоговой информации
/// </summary>
/// <param name="userInput"></param>
/// <returns></returns>
string ConsoleResultInfo(int userInput)
{
    string negative = "неравен";
    string positive = "равен";

    int cubSum = CalcCubSum(userInput);
    int square = userInput * userInput;

    return "Куб суммы цифр этого числа " + (cubSum == square ? positive : negative) + " " +  to_string(square);
    
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int userInput = 0;
    cout << "Программа поможет определить что куб суммы цифр этого числа равен А * А, введите число А: ";
    cin >> userInput;
    
    cout << ConsoleResultInfo(userInput);
}
