#include <iostream>
#include <string>
#include <cstdlib>
#include <Windows.h>

using namespace std;



void labaWork_1() {
    int exit = 0; //  переменная для завершения программы или начать функцию заново
    int task_1 = 0; // для проверки номера задания

    cout << "Введите номер задания (1 - 3)" << endl;
    cin >> task_1;

    if (task_1 > 3 || task_1 < 1)
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

    switch (task_1)
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
             cout << "Завершить программу 1, запустить лабу №1 заново цифра 2" << endl;
             cin >> exit;

             if (exit == 1)
             {
                 abort;
             }
             else if (exit == 2)
             {
                 labaWork_1();
             }
             else if (exit < 1 || exit > 2)
             {
                 abort;
             }

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
     
     
     
     
     
     
     
     
     
     
     
     }
     default:

        break;
    }

}

int main()
{
    setlocale(LC_ALL, "ru");

    labaWork_1();
}

