﻿#include <iostream>
#include <string>
#include <cstdlib>
#include <Windows.h>
#include <cmath>
#include <math.h>
#include <stdio.h>
#include "Laba_3_2.h"
using namespace std;

void labaWork_1() {

    int task = 0; // для проверки номера задания

    cout << "Введите номер задания (1 - 3)" << endl;
    cin >> task;

    if (task > 3 || task < 1)
    {
        int error = 0; // ошибка выбора задания
        cout << "Вы ввели неправильный номер задания" << endl; // Ошибка ввода 'Номер задания ЛАБА 1'
        Sleep(2000);
        cout << "Ввести номер задания снова, нажмите цифру 1 или завершите работу программы, нажав цифру 2" << endl;
        cin >> error;
        if (error == 1)
        {
            labaWork_1(); // Перезагрузка программы ' Лаба 1 '
        }
        else if (error == 2)
        {
            abort;
        }
        else
        {
            cout << "Хватит шуток !!!" << endl;
            Sleep(2000);
            abort; // Завершение программы
        }
    }

    switch (task)
    {
     
     case 1:
     {
         int x = 0, y = 0, a = 0; // Задание 1
         cout << "Введите число а " << endl; // Задание 1
         cin >> a;
         x = 12 * a * a + 7 * a - 16;
         y = 7 * x * x - 3 * x + 6;
         cout << "а) Значение функции " << "12 * " << a << " * " << a << " + 7 * " << a << " - 16 = " << x << endl;
         cout << "б) Значение функции " << "7 * " << x << " * " << x << " - 3 * " << x << " + 6  = " << y << endl;
     }
        break;
     case 2:
     {
         int square = 0; // для выбора раздела задания 2
         int ab = 0, ba = 0; // переменные для задания 2

         cout << "Вычислить периметр цифра 1, выичислить площадь цифра 2" << endl;
         cin >> square;

         if (square == 1)
         {
             cout << "Введите длинну стороны четырехугольника a и b" << endl;
             cin >> ab;
             ab = ab * 4; // Периметр 
             cout << "Периметр четырехугольника = " << ab << endl;

             Sleep(1000);
         }
         else if (square == 2)
         {
             cout << "Введите длинну стороны четырехугольника a и b" << endl;
             cin >> ab;
             ab = ab * ab;
             cout << "Площадь четырехугольника  = " << ab << endl;
         }
     }
        break;
     case 3:
     {

         int celsius = 0;
         double c = 0, f = 0, k = 0;
         cout << "По какой шкале вычислить температуру ? " << endl;
         cout << "По шкале Фаренгейта цифра 1\nПо шкале Кельвина цифра 2" << endl;
         cin >> celsius;

         if (celsius == 1)
         {
             cout << "Введите градусы Цельсия" << endl;
             cin >> c;
             f = c * 1.8 + 32;
             cout << "По шкале Фаренгейта = " << f << endl;
         }
         else if (celsius == 2)
         {
             cout << "Введите градусы Цельсия" << endl;
             cin >> c;
             k = c + 273.15;
             cout << "По шкале Кельвина = " << k << endl;
         }
         else
         {
             abort;
         }
     }
     default:

        break;
    }

}  

void labaWork_2() {
    
    int task = 0; // для проверки номера задания

    cout << "Введите номер задания (1 - 5)" << endl;
    cin >> task;

    if (task > 5 || task < 1)
    {
        int error = 0; // ошибка выбора задания
        cout << "Вы ввели неправильный номер задания" << endl; // Ошибка ввода 'Номер задания ЛАБА 1'
        Sleep(2000);
        cout << "Ввести номер задания снова, нажмите цифру 1 или завершите работу программы, нажав цифру 2" << endl;
        cin >> error;
        if (error == 1)
        {
            labaWork_2(); // Перезагрузка программы ' Лаба 1 '
        }
        else if (error == 2)
        {
            abort;
        }
        else
        {
            cout << "Хватит шуток !!!" << endl;
            Sleep(2000);
            abort; // Завершение программы
        }
    }

    switch (task)
    {
    case 1:
    {
        double a = 0;
        cout << "Введите число" << endl;
        cin >> a;
        cout << "Вы ввели число: " << a << endl;
    }
        break;
    case 2:
    {
        double a = 0;
        cout << "Введите число" << endl;
        cin >> a;
        cout << a << " - вот такое число Вы ввели" << endl;
    }
        break;
    case 3:
    {
        int a = 1, b = 13, c = 49;
        cout << a << " " << b << " " << c << " " << endl;
    }
        break;
    case 4:
    {
        int a = 50,b = 10;
        cout << a << "\n" << b;
    }
        break;
    case 5:
    {
        int x = 0, y = 0;
        cout << "Введите числа x и y" << endl;
        cin >> x;
        cin >> y;
        cout << "а) 7 см\nб) " << x << " 25\nв) " << x << " " << y << endl;

    }
        break;
    default:

        break;
    }

}

void labaWork_3() {

    int task = 0; // для проверки номера задания

    cout << "Введите номер задания (1 - 5)" << endl;
    cin >> task;

    if (task > 5 || task < 1)
    {
        int error = 0; // ошибка выбора задания
        cout << "Вы ввели неправильный номер задания" << endl; // Ошибка ввода 'Номер задания ЛАБА 1'
        Sleep(2000);
        cout << "Ввести номер задания снова, нажмите цифру 1 или завершите работу программы, нажав цифру 2" << endl;
        cin >> error;
        if (error == 1)
        {
            labaWork_2(); // Перезагрузка программы ' Лаба 1 '
        }
        else if (error == 2)
        {
            abort;
        }
        else
        {
            cout << "Хватит шуток !!!" << endl;
            Sleep(2000);
            abort; // Завершение программы
        }
    }

    switch (task)
    {
    case 1:
    {
        const double E = 2.7182818284;
        const double PI = 3.1415926535;

        cout << "Число Эйлера = " << E << "\nЧисло Пи = " << PI << endl;
    }
        break;
    case 2:
    {
         MySpace::Laba();
    }
        break;
    case 3:
    {
        double x = 0, y = 0, z = 0;
        cout << "Введите значение X и Y" << endl;
        cin >> x;
        cin >> y;
        z = x*x*x - 2.5 * x * y + 1.78 * x*x - 2.5 * y + 1;
        cout << "Значение функции z = " << z << endl;
    }
        break;
    case 4:
    {

    }
        break;
    default:
        break;
    }
}

int main()
{
    setlocale(LC_ALL, "ru");

    

    int exit = 0; //  переменная для завершения программы или начать функцию заново
    int labN = 0;
    
    cout << "Какую лабараторную работу запустить ? ( 1 - n )" << endl;
    cin >> labN;

    if (labN < 1 || labN > 5)
    {
        int a = 0;
        cout << "Вы ввели неправильный номер лабораторной работы\n1 - Выбрать снова\n 2 - Закрыть программу " << endl;
        if (a == 1)
        {
            main();
        }
        else if (a == 2)
        {
            abort;
        }
        else
        {
            abort;
        }
    }

    switch (labN)
    {
    case 1:
    {
        labaWork_1();
    }
        break;
    case 2:
    {
        labaWork_2();
    }
        break;
    case 3:
        labaWork_3();
        break;
    default:
        break;
    }

    cout << "Запустить программу заново цифра - 1\nЗавершить программу цифра 2" << endl;
    cin >> exit;

    if (exit == 1)
    {
        main();
    }
    else if (exit == 2)
    {
        abort;
    }
    else
    {
        abort;
    }
}