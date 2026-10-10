#include <iostream>
using namespace std;

int main() {
    const int TANK_CAPACITY = 300;
    int distanceAB, distanceBC, weight;
    double fuelAB, fuelBC, totalFuel, neededRefuel;

    cout << "Введите расстояние AB: ";
    cin >> distanceAB;
    cout << "Введите расстояние BC: ";
    cin >> distanceBC;
    cout << "Введите вес груза: ";
    cin >> weight;

    if (weight > 2000) {
        cout << "Превышен допустимый вес груза!";
        return 0;
    }

    double consumption;
    if (weight <= 500) consumption = 1.0;
    else if (weight <= 1000) consumption = 4.0;
    else if (weight <= 1500) consumption = 7.0;
    else consumption = 9.0;