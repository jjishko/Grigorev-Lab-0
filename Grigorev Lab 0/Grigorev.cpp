#include <iostream>

using std::cout;
using std::cin;


int main()
{
    setlocale(LC_ALL, "ru");

    char sym;

    cout << "������� ������, � ��������� � ���� �������������: ";
    cin >> sym;

    cout << "Hello World, ��� ������ - " << sym;

    return 0;
}