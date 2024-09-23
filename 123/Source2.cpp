//������� 3
#include <iostream>
#include <limits>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int numbers[7];
    int maxNumber = numeric_limits<int>::min(); 

    cout << "������� 7 ����� �����:\n";

    for (int i = 0; i < 7; ++i) {
        cin >> numbers[i];

        if (cin.fail()) {
            cout << "������ �����! ������� ����� �����.\n";
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            --i; 
            continue; 
        }

        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    cout << "������������ �����: " << maxNumber << endl;

    return 0;
}