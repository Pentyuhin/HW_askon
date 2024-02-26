#include <iostream>
#include <windows.h>

using namespace std;

static int temp()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double minTemp, maxTemp, step;

    // ���� ����������� � ������������ �����������, � ����� ���� ���������
    cout << "������� ����������� ����������� � �������� �������: ";
    cin >> minTemp;

    cout << "������� ������������ ����������� � �������� �������: ";
    cin >> maxTemp;

    cout << "������� ��� ��������� �����������: ";
    cin >> step;


    cout << "\n ������� �������������� ����������: \n";
    cout << "����������� � �������� �������: �� " << minTemp << " �� " << maxTemp << " � ����� " << step << "\n\n";


    cout << "�������   ���������   �������\n";

    // �������������� � ����� ��������
    for (double temp = minTemp; temp <= maxTemp; temp += step) {

        double fahrenheitTemp = 1.8 * temp + 32;
        double kelvinTemp = temp + 273.15;

        cout << temp << "        " << fahrenheitTemp << "       " << kelvinTemp << "\n";
    }

    return 0;
}