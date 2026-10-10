#include <iostream>
using namespace std;

int main() {
    int number, d1, d2, d3, d4, newNumber;

    cout << "Введите четырехзначное число: ";
    cin >> number;

    if (number / 1000 < 1) {
        cout << "Число содержит меньше 4 цифр!";
    }
    else if (number / 1000 > 9) {
        cout << "Число содержит больше 4 цифр!";
    }
    else {
        d4 = number % 10;
        number /= 10;
        d3 = number % 10;
        number /= 10;
        d2 = number % 10;
        d1 = number / 10;

        newNumber = d2 * 1000 + d1 * 100 + d4 * 10 + d3;
        cout << "Результат: " << newNumber;
    }
    return 0;
}