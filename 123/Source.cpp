//������� 1
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int number;

    cout << "������� ������������ �����: ";
    cin >> number;

    if (number < 100000 || number > 999999) {
        cout << "������: ��������� ����� �� �������� ������������." << endl;
        return 1; 
    }

    int sum1 = (number / 100000) % 10 + (number / 10000) % 10 + (number / 1000) % 10;

    int sum2 = (number / 100) % 10 + (number / 10) % 10 + number % 10;

    if (sum1 == sum2) {
        cout << "����� " << number << " - ����������!" << endl;
    }
    else {
        cout << "����� " << number << " - �� ����������." << endl;
    }

    return 0;
}

