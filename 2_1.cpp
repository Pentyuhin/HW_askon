#include <iostream>
// #include <windows.h>

using namespace std;


static int celsius()
{
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);

    int celsius;

    cout << "������� ����������� � �������� �������: ";
    cin >> celsius;

    cout << "\n������� �������������� ����������:\n";

    cout << "�������   ���������   �������\n";

    double kelvinTemp = celsius + 273.15;
    double fahrenheitTemp = 1.8 * celsius + 32;

    cout << celsius << "        " << fahrenheitTemp << "        " << kelvinTemp << endl;

    return 0;
}
