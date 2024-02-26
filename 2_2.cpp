#include <iostream>
// #include <windows.h>

using namespace std;

static int temp()
{

    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);

    double minTemp, maxTemp, step;

    // Ввод минимальной и максимальной температуры, а также шага изменения
    cout << "Введите минимальную температуру в градусах Цельсия: ";
    cin >> minTemp;

    cout << "Введите максимальную температуру в градусах Цельсия: ";
    cin >> maxTemp;

    cout << "Введите шаг изменения температуры: ";
    cin >> step;


    cout << "\n Таблица преобразования температур: \n";
    cout << "Температуры в градусах Цельсия: от " << minTemp << " до " << maxTemp << " с шагом " << step << "\n\n";


    cout << "Цельсий   Фаренгейт   Кельвин\n";

    // Преобразование и вывод значений
    for (double temp = minTemp; temp <= maxTemp; temp += step) {

        double fahrenheitTemp = 1.8 * temp + 32;
        double kelvinTemp = temp + 273.15;

        cout << temp << "        " << fahrenheitTemp << "       " << kelvinTemp << "\n";
    }

    return 0;
}