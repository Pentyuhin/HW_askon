#include <iostream>
#include <windows.h>

using namespace std;



static int exponent()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double base, result = 1;
    int exponent;

    cout << "¬озведени€ произвольного числа 'x' в целочисленную степень 'n' " << endl;

    cout << "¬ведите х: ";
    cin >> base;
    cout << "¬ведите степень n: ";
    cin >> exponent;

    // ѕровер€ем знак степени
    if (exponent > 0)
    {
        // ¬ычисл€ем степень числа
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