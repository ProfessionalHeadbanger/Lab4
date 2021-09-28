#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

const int R = 1;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int N;
    double x, E;
    cout << "Введите значения x, N и E, где x лежит в интервале (" << -R << ";" << R << "), а N - натуральное число: " << endl;
    cout << "x: ";
    cin >> x;
    if (x >= 1 || x <= -1)
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

    double sum1;
    for (int i = 1; i <= N; i++)
    {

    }
}