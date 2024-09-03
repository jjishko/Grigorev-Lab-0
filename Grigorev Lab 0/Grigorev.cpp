#include <iostream>

using std::cout;
using std::cin;


int main()
{
    setlocale(LC_ALL, "ru");

    char sym;

    cout << "Введите символ, и программа с Вами поздоровается: ";
    cin >> sym;

    cout << "Hello World, Ваш символ - " << sym;

    return 0;
}