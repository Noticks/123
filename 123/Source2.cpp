//задание 3
#include <iostream>
#include <limits>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int numbers[7];
    int maxNumber = numeric_limits<int>::min(); 

    cout << "Введите 7 целых чисел:\n";

    for (int i = 0; i < 7; ++i) {
        cin >> numbers[i];

        if (cin.fail()) {
            cout << "Ошибка ввода! Введите целое число.\n";
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            --i; 
            continue; 
        }

        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    cout << "Максимальное число: " << maxNumber << endl;

    return 0;
}