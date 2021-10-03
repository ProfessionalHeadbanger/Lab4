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
    double E1 = E / 10;

    double sum1 = x;
    double x_step = 3;
    double num = 1;
    double den = 2;
    double dr = 1;
    if (N > 1)
    {
        sum1 = sum1 + dr * (num / den) * (pow(x, x_step) / x_step);
        dr *= num / den;
        x_step += 2;
        num += 2;
        den += 2;

        if (N > 2)
        {
            for (int i = 3; i <= N; i++)
            {
                sum1 = sum1 + dr * (num / den) * (pow(x, x_step) / x_step);
                dr *= num / den;
                x_step += 2;
                num += 2;
                den += 2;
            }
        }
    }
    cout << "Первая сумма N слагаемых равна: " << sum1 << endl << endl;

    double sum2 = 0;
    int number_sl1 = 0;
    if (abs(x) > E)
    {
        sum2 = x;
        number_sl1++;
        double x_step = 3;
        double num = 1;
        double den = 2;
        double dr = 1;
        if (N > 1)
        {
            if (abs(dr * (num / den) * (pow(x, x_step) / x_step)) > E)
            {
                sum2 = sum2 + dr * (num / den) * (pow(x, x_step) / x_step);
                dr *= num / den;
                x_step += 2;
                num += 2;
                den += 2;
                number_sl1++;
            }
            if (N > 2)
            {
                for (int i = 3; i <= N; i++)
                {
                    if (abs(dr * (num / den) * (pow(x, x_step) / x_step)) > E)
                    {
                        sum2 = sum2 + dr * (num / den) * (pow(x, x_step) / x_step);
                        dr *= num / den;
                        x_step += 2;
                        num += 2;
                        den += 2;
                        number_sl1++;
                    }
                }
            }
        }
    }
    cout << "Вторая сумма N слагаемых равна: " << sum2 << endl;
    cout << "Количество слагаемых второй суммы, которые больше по абсолютному значению числа E: " << number_sl1 << endl << endl;

    double sum3 = 0;
    int number_sl2 = 0;
    if (abs(x) > E1)
    {
        sum3 = x;
        number_sl2++;
        double x_step = 3;
        double num = 1;
        double den = 2;
        double dr = 1;
        if (N > 1)
        {
            if (abs(dr * (num / den) * (pow(x, x_step) / x_step)) > E1)
            {
                sum3 = sum3 + dr * (num / den) * (pow(x, x_step) / x_step);
                dr *= num / den;
                x_step += 2;
                num += 2;
                den += 2;
                number_sl2++;
            }
            if (N > 2)
            {
                for (int i = 3; i <= N; i++)
                {
                    if (abs(dr * (num / den) * (pow(x, x_step) / x_step)) > E1)
                    {
                        sum3 = sum3 + dr * (num / den) * (pow(x, x_step) / x_step);
                        dr *= num / den;
                        x_step += 2;
                        num += 2;
                        den += 2;
                        number_sl2++;
                    }
                }
            }
        }
    }
    cout << "Третья сумма N слагаемых равна: " << sum3 << endl;
    cout << "Количество слагаемых третьей суммы, которые больше по абсолютному значению числа E1 = E/10: " << number_sl2 << endl << endl;

    double arcsin_x = asin(x);
    cout << "Арксинус от х равен: " << arcsin_x << endl << endl;

    cout << "Наиболее близким результатом к арксинусу от х является сумма: ";
    if ((abs(sum1 - arcsin_x) < abs(sum2 - arcsin_x)) && (abs(sum1 - arcsin_x) < abs(sum3 - arcsin_x)))
    {
        cout << "первая" << endl;
    }
    if ((abs(sum2 - arcsin_x) < abs(sum1 - arcsin_x)) && (abs(sum2 - arcsin_x) < abs(sum3 - arcsin_x)))
    {
        cout << "вторая" << endl;
    }
    if ((abs(sum3 - arcsin_x) < abs(sum2 - arcsin_x)) && (abs(sum3 - arcsin_x) < abs(sum1 - arcsin_x)))
    {
        cout << "третья" << endl;
    }
}
