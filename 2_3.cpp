#include <iostream>
#include <typeinfo>
// #include <windows.h>

using namespace std;


static int word()
{

    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);

    char word;

    cout << "Введите символ: ";
    cin >> word;

    int ascii = static_cast<int>(word);


    if (islower(word)) {
        cout << "Букве " << word << " соответствует прописная буква: " << static_cast<char>(toupper(word)) << "  " << "ASCII код символа: " << ascii << endl;
    }
    else if (isupper(word)) {
        cout << "Букве " << word << " соответствует строчная буква: " << static_cast<char>(tolower(word)) << "  " << "ASCII код символа: " << ascii << endl;
    }
    else {
        cout << "Символ " << word << " не является буквой " << endl;
    }

    return 0;
}