#include <iostream>
#include <Windows.h> 
#include <cmath>

using namespace std;

const int R = 1;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int N;
    double x, E;
    cout << "Введите значения x, N и E, где x лежит в интервале (" << -R << ";" << R << "), а N - натуральное число: " << endl;
    cout << "x: ";
    cin >> x;
    if (x > R || x < -R)
    {
        cout << "Введенный x не принадлежит интервалу (" << -R << ";" << R << ")" << endl;
        return 0;
    }
    cout << "N: ";
    cin >> N;
    if (N <= 0)
    {
        cout << "Введенный N не является натуральным числом" << endl;
    }
    cout << "E: ";
    cin >> E;
    double E1 = E / 10;

    double sum1 = x;
    double g = x * x;
    double den = 2;
    double slag = 1;
    int counter = 0;
    int step = 3;

    while (counter < N - 1)
    {
        sum1 = sum1 + slag * (1 / den) * (x * g / (den + 1));
        slag *= (step / den);
        g *= x * x;
        den += 2;
        step += 2;
        counter++;
    }

    cout << sum1 << endl;
    
}
