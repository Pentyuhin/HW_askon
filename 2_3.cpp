#include <iostream>
#include <typeinfo>
// #include <windows.h>

using namespace std;


static int word()
{

    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);

    char word;

    cout << "������� ������: ";
    cin >> word;

    int ascii = static_cast<int>(word);


    if (islower(word)) {
        cout << "����� " << word << " ������������� ��������� �����: " << static_cast<char>(toupper(word)) << "  " << "ASCII ��� �������: " << ascii << endl;
    }
    else if (isupper(word)) {
        cout << "����� " << word << " ������������� �������� �����: " << static_cast<char>(tolower(word)) << "  " << "ASCII ��� �������: " << ascii << endl;
    }
    else {
        cout << "������ " << word << " �� �������� ������ " << endl;
    }

    return 0;
}