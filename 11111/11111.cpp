#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <Windows.h>
#include <cmath>
#include <math.h>
#include <stdio.h>
#include "Laba_3_2.h"
#include "Laba_5_3.h"
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

    cout << "Введите номер задания (1 - 4)" << endl;
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
        double a, b, c, p;

        cout << "Введите длинну катета a = "; cin >> a; cout << "\n";
        cout << "Введите длинну катета b = "; cin >> b; cout << "\n";
        c = pow(a,0.5) + pow(b,0.5);
        p = a + b + c;

        cout << "Периметр равен = " << p << endl;
    }
        break;
    default:
        break;
    }
}

void labaWork_4() {

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
        int a = 0, b = 0, c = 0;
        cout << "Введите 3 целых числа" << endl;
        cout << "Число a = "; cin >> a;
        cout << "Число b = "; cin >> b;
        cout << "Число c = "; cin >> c;
        if (a > b && a > c)
        {
            cout << "Максимальное число a  = " << a << endl;
        }
        else if (b > a && b > c)
        {
            cout << "Максимальное число b  = " << b << endl;
        }
        else if (c > b && c > a)
        {
            cout << "Максимальное число c  = " << c << endl;
        }

        if (a < b && a < c)
        {
            cout << "Минимальное число a  = " << a << endl;
        }
        else if (b < a && b < c)
        {
            cout << "Минимальное число b  = " << b << endl;
        }
        else if (c < b && c < a)
        {
            cout << "Минимальное число c  = " << c << endl;
        }
    }
    break;
    case 2:
    {
        int  Birth_year = 0, Birth_Moth = 0, Today_Moth = 0, Today_year = 0;
        int year_year = 0;

        cout << "Введите свой месяц и год рождения " << endl;
        cin >> Birth_Moth; cin >> Birth_year;
        cout << "Введите нынешний месяц  и год рождения " << endl;
        cin >> Today_Moth; cin >> Today_year;

        year_year = Today_year - Birth_year; // Сколько лет человеку

        if (Today_Moth < Birth_Moth)
        {
            year_year--;

        }
        if (Birth_Moth == Today_Moth)
        {
            cout << "С днем рождения !\n Ваш возраст  = " << year_year << endl;


        }
        cout << "Ваш возраст = " << year_year << " лет(года)" << endl;
    }
    break;
    case 3:
    {
        int k;

        cout << "Введите номер дня в году (1 ≤ k ≤ 365):" << endl;
        cin >> k;

        if (k < 1 || k > 365)
        {
            cout << "Неверное значение k. Пожалуйста, введите число от 1 до 365." << endl;// Проверка 
            abort;
        }

        int dayOfWeek = (k - 1) % 7;

        if (dayOfWeek == 5 || dayOfWeek == 6)
        {
            cout << "Выходной день" << endl;
        }
        else
        {
            cout << "Рабочий день" << endl;
        }

    }
    break;
    case 4:
    {
        int KO;
        cout << "Введите кол-во очков заработанных футбольной командой (0,1,3)" << endl;
        cin >> KO;

        if (KO < 0 || KO>3 || KO == 2)
        {
            cout << "Вы ввели неверное кол-во очков, команда может заработать только 0,1,3 очка" << endl;
        }

        switch (KO)
        {
        case 0:
        {
            cout << "Команда проиграла" << endl;
        }
        break;
        case 1:
        {
            cout << "Ничья" << endl;
        }
        break;
        case 3:
        {
            cout << "Команда победила" << endl;
        }
        break;
        default:
            break;
        }
    }
    break;
    case 5:
    {
        int motch;

        cout << "Введите номер месяца 1-12" << endl;
        cin >> motch;
        if (motch < 1 || motch > 12)
        {
            cout << "Вы ввели неправильный номер, введите 1-12" << endl;
        }

        switch (motch)
        {
        case 1:
        {
            cout << "Январь" << endl;
        }
        break;
        case 2:
        {
            cout << "Февраль" << endl;
        }
        break;
        case 3:
        {
            cout << "Март" << endl;
        }
        break;
        case 4:
        {
            cout << "Апрель" << endl;
        }
        break;
        case 5:
        {
            cout << "Май" << endl;
        }
        break;
        case 6:
        {
            cout << "Июнь" << endl;
        }
        break;
        case 7:
        {
            cout << "Июль" << endl;
        }
        break;
        case 8:
        {
            cout << "Август" << endl;
        }
        break;
        case 9:
        {
            cout << "Сентябрь" << endl;
        }
        break;
        case 10:
        {
            cout << "Октябрь" << endl;
        }
        break;
        case 11:
        {
            cout << "Ноябрь" << endl;
        }
        break;
        case 12:
        {
            cout << "Декабрь" << endl;
        }
        break;
        default:
            break;
        }
    }
        break;
    default:
        break;
    }
}

void labaWork_5() {

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
        double Distance = 10, Workout = 0;
        double TotalDistance = Distance;

        cout << "Введите кол-во тренировок: ";
        cin >> Workout;
        cout << "1" << " День " << "10" << " км" << endl;
        for (int day = 2; day < Workout + 1; day++)
        {
            Distance *= 1.1; // Увеличение пробега на 10%

            TotalDistance += Distance; // Обновление суммарного пробега
            
            cout << day << " День " << Distance << " км" << endl;

        }
        cout << "Суммарный путь, который он пробежал:" << TotalDistance << " км" << endl;

    }
        break;
    case 2:
    {
        double number = 1, sum = 0;

        cout << "Введите число: ";
        cin >> number;

        for (int i = 1; i <= number; i++)
        {
            sum += i;
        }
        double average = sum / number;

        cout << "Среднее арифметическое всех чисел от 1 до " << number << ": " << average << endl;
      
    }
        break;
    case 3:
    {
        Laba5_3::lab5();
    }
        break;
    case 4:
    {
        int count = 0;
        int number = 101;
        while (count < 10)
        {
            if (number % 10 == 7 && number % 9 == 0) {
                cout << number << endl;
                count++;
            }
            number++;
        }
    }
        break;
    case 5:
    {
        int n;
        cout << "Введите целое число n: ";
        cin >> n;
        
        int number = 1;
        while (number * number <=n)
        {
            number++;
        }
        cout << "Первое число, большее " << n << ", это " << number << endl;
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
    
    cout << "Какую лабораторную работу запустить ? ( 1 - n )" << endl;
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
    {
        labaWork_3();
    }
        break;
    case 4: 
    {
        labaWork_4();
    }
        break;
    case 5:
    {
        labaWork_5();
    }
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