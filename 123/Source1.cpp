//������� 2

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int number;

    cout << "������� �������������� �����: ";
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "������: ��������� ����� �� �������� ��������������." << endl;
        return 1; 
    }

    int digit1 = number / 1000;
    int digit2 = (number % 1000) / 100;
    int digit3 = (number % 100) / 10;
    int digit4 = number % 10;

    int newNumber = digit2 * 1000 + digit1 * 100 + digit4 * 10 + digit3;

    cout << "���������� �����: " << newNumber << endl;

    return 0;
}