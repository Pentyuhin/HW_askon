#include <iostream>
#include <windows.h>

using namespace std;



static int exponent()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double base, result = 1;
    int exponent;

    cout << "���������� ������������� ����� 'x' � ������������� ������� 'n' " << endl;

    cout << "������� �: ";
    cin >> base;
    cout << "������� ������� n: ";
    cin >> exponent;

    // ��������� ���� �������
    if (exponent > 0)
    {
        // ��������� ������� �����
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
        cout << base << " � ������� " << exponent << " ����� " << result << endl;
    }
    else if (exponent < 0)
    {
        cout << "������� " << exponent << " �� ����� ���� �������������!" << endl;
    }
    else
    {
        cout << "�������" << exponent << " �� ����� ���� �����!" << endl;
    }

    return 0;
}