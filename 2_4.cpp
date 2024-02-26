#include <iostream>
// #include <windows.h>

using namespace std;



static int exponent()
{
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);

    double base, result = 1;
    int exponent;

    cout << "Возведения произвольного числа 'x' в целочисленную степень 'n' " << endl;

    cout << "Введите х: ";
    cin >> base;
    cout << "Введите степень n: ";
    cin >> exponent;

    // Проверяем знак степени
    if (exponent > 0)
    {
        // Вычисляем степень числа
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
        cout << base << " в степени " << exponent << " равно " << result << endl;
    }
    else if (exponent < 0)
    {
        cout << "степень " << exponent << " не может быть отрицательной!" << endl;
    }
    else
    {
        cout << "степень" << exponent << " не может быть нулем!" << endl;
    }

    return 0;
}