#include <iostream>
using namespace std;

int main() {
    int number, d1, d2, d3, d4, d5, d6;

    cout << "Введите шестизначное число: ";
    cin >> number;

    if (number / 100000 < 1) {
        cout << "Число содержит меньше 6 цифр!";
    }
    else if (number / 100000 > 9) {
        cout << "Число содержит больше 6 цифр!";
    }
    else {
        d6 = number % 10;
        number /= 10;
        d5 = number % 10;
        number /= 10;
        d4 = number % 10;
        number /= 10;
        d3 = number % 10;
        number /= 10;
        d2 = number % 10;
        d1 = number / 10;

        int sum1 = d1 + d2 + d3;
        int sum2 = d4 + d5 + d6;

        if (sum1 == sum2) {
            cout << "Число счастливое!";
        }
        else {
            cout << "Число не счастливое.";
        }
    }
    return 0;