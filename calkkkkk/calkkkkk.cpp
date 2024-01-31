#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    bool isRun = true;
    double result = 1;
    int motion;
    double a, b;
    setlocale(LC_ALL, "RUS");

    while (isRun)
    {
        string mot = "";
        int res = 1;
        cout << "Добро пожаловать в калькулятор" << endl << "Выберите действие" << endl <<
            "1.Сложение\n"
            "2.Вычитание\n"
            "3.Умножение\n"
            "4.Деление\n"
            "5.Возведение a в степень b\n"
            "6.Нахождения квадратного корня числа a\n"
            "7.Нахождение 1 процента от числа\n"
            "8.Найти факториал числа\n"
            "9.Выйти из программы.\n"
            "Введите действие - ";

        cin >> motion;
        if (motion == 9) {
            break;
        }
        cout << "Введите число a - ";
        cin >> a;
        cout << "Введите число b - ";
        cin >> b;


        switch (motion)
        {
        case 1:
            result = a + b;
            mot = "сложениие - ";
            break;
        case 2:
            result = a - b;
            mot = "вычитание - ";
            break;
        case 3:
            result = a * b;
            mot = "умножение - ";
            break;
        case 4:
            if (b == 0) {
                cout << "На ноль делить нельзя! - ";
            }
            else {
                result = a / b;
                mot = "деления - ";
            }
            break;
        case 5:
            result = pow(a, b);
            mot = "возведения числа a в степень b - ";
            break;
        case 6:
            result = sqrt(a);
            mot = "квадратный корень числа a";
            break;
        case 7:
            result = a / 100;
            mot = "1 % от числа a";
            break;
        case 8:
            if (a < 0) {
                cout << "Факториала от отрицательного числа не бывает!";
            }
            else {
                for (int i = 1; i <= a; i++) {
                    res = res * i;
                }
                mot = "факториал числа а - ";
                result = res;
            }
            break;
        case 9:
            isRun = false;
            break;
        default:
        {
            mot = "ERROR";
            cout << "Действие не найдено!";
            break;
        }
        }
        cout << "Результат " << mot << " " << result << " \nХотите повторить? Да/Нет" << endl;
        string input;
        cin >> input;

        if (input == "Нет") {
            break;
        }
        else {
            system("cls");
            continue;
        }

    }



}
