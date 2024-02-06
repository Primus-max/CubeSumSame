// Пользователь вводит целое число А. Программа должна
// определить, что куб суммы цифр этого числа равен А* А.
//

#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;


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


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int userInput = 0;
    cout << "Программа поможет определить что куб суммы цифр этого числа равен А * А, введите число А: ";
    cin >> userInput;

    

}
