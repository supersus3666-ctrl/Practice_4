#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f, g, maxNum;

    cout << "Введите 7 чисел:\n";
    cin >> a >> b >> c >> d >> e >> f >> g;

    maxNum = (a > b) ? a : b;
    if (c > maxNum) maxNum = c;
    if (d > maxNum) maxNum = d;
    if (e > maxNum) maxNum = e;
    if (f > maxNum) maxNum = f;
    if (g > maxNum) maxNum = g;

    cout << "Максимальное число: " << maxNum;
    return 0;
}