#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <Windows.h>
#include <cmath>
#include <math.h>
#include <stdio.h>
#include <array>
#include <algorithm>
#include <vector>
#include <numeric>
#include <regex>
#include <sstream>
#include <unordered_set>
#include <unordered_map>
#include "Laba_3_2.h"
#include "Laba_5_3.h"
#include "Laba_6_5.h"
#include "Laba_7_4.h"
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
            labaWork_3(); // Перезагрузка программы ' Лаба 1 '
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
            labaWork_4(); // Перезагрузка программы ' Лаба 1 '
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

        cout << "Введите номер дня в году (1 <= k <= 365):" << endl;
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
            labaWork_5(); // Перезагрузка программы ' Лаба 1 '
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

        int sum_a = 0; // static_cast это оператор преобразования типов
        for (int i = 1; i <= 1000; ++i) {
            sum_a += i;
        }
        double average_a = static_cast<double>(sum_a) / 1000;
        cout << "Среднее арифметическое чисел от 1 до 1000: " << average_a << endl;

        // б) среднее арифметическое всех целых чисел от 1 до n
        int n;
        cout << "Введите число n: ";
        cin >> n;
        if (n >= 1) {
            int sum_b = 0;
            for (int i = 1; i <= n; ++i) {
                sum_b += i;
            }
            double average_b = static_cast<double>(sum_b) / n;
            cout << "Среднее арифметическое чисел от 1 до " << n << ": " << average_b << endl;
        }
        else {
            cout << "Число n должно быть больше или равно 1." << endl;
        }
      
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
        if (n < 0)
        {
            cout << "Число не может быть отрицательным" << endl;
            
        }
        int number = static_cast<int>(sqrt(n));
        while (number * number <=n)
        {
            number++;
        }
        int sqrtnumber = number * number;
        cout << "Первое число, большее " << n << ", это " << number << " или " << number << "^2 = " << sqrtnumber << endl;
    }
        break;
    default:
        break;
    }


}

void labaWork_6() {
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
            labaWork_6(); // Перезагрузка программы 
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
array<int, 3> arr;
    cout << "Введите 3 числа" << endl;

    for (auto& el : arr) {
        cin >> el;
    }

    for (const auto& el : arr) {
        string sign = (el < 0) ? "отрицательное " : "";
        if (el % 2 == 0) {
            if (el >= 10 || el <= -10) {
                cout << "Четное двухзначное " << sign << "число: " << el << endl;
            } else if (el == 0) {
                cout << "Ноль: " << el << endl;
            } else {
                cout << "Четное однозначное " << sign << "число: " << el << endl;
            }
        } else {
            if (el >= 10 || el <= -10) {
                cout << "Нечетное двухзначное " << sign << "число: " << el << endl;
            } else {
                cout << "Нечетное однозначное " << sign << "число: " << el << endl;
            }
        }
    }
    }
        break;
    case 2:
    {
        int n;
        cout << "Введите количество элементов массива: ";
        cin >> n;

        vector<int> arr(n);
        cout << "Введите элементы массива: ";
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int minimalelement = *min_element(arr.begin(), arr.end());
        int maxsimumelement = *max_element(arr.begin(), arr.end());
        double average = (minimalelement + maxsimumelement) / 2.0;

        cout << "Минимальное число: " << minimalelement << endl;
        cout << "Максимальное число: " << maxsimumelement << endl;
        
        vector<int> indices;
        for (int i = 0; i < n; ++i) {
            if (arr[i] > average) {
                indices.push_back(i);
            }
        }

        cout << "Количество элементов, значение которых больше среднего арифметического: " << indices.size() << endl;
        cout << "Порядковые номера элементов больше среднего: ";
        for (int index : indices) {
            cout << index << " ";
        }
        cout << endl;

        // Вывод порядковых номеров минимального и максимального элементов
        auto minPos = find(arr.begin(), arr.end(), minimalelement) - arr.begin();
        auto maxPos = find(arr.begin(), arr.end(), maxsimumelement) - arr.begin();
        cout << "Порядковый номер минимального числа: " << minPos << endl;
        cout << "Порядковый номер максимального числа: " << maxPos << endl;
    }
    break;
    case 3:
    {
        int n;
        cout << "Введите количество элементов массива: ";
        cin >> n;

        vector<double> arr(n);
        cout << "Введите элементы массива: ";
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        double sum = accumulate(arr.begin(), arr.end(), 0.0); // accumulate функция для вычисления суммы эл-ов
        double average = sum / n;

        for (double& value : arr) {
            if (value > 0) {
                value += 1;
            }
            else if (value < 0) {
                value -= 1;
            }
            else {
                value = average;
            }
        }

        // Вывод измененного массива
        for (const double& value : arr) {
            cout << value << " ";
        }
        cout << endl;

    }
    break;
    case 4:
    {
        int rows, cols;
        cout << "Введите количество строк и столбцов массива: ";
        cin >> rows >> cols;

        vector<vector<int>> matrix(rows, vector<int>(cols));
        cout << "Введите элементы массива:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> matrix[i][j];
            }
        }

        int maxElement = INT_MIN, minElement = INT_MAX;
        pair<int, int> maxCoords, minCoords;

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (matrix[i][j] > maxElement) {
                    maxElement = matrix[i][j];
                    maxCoords = { i, j };
                }
                else if (matrix[i][j] == maxElement && (i < maxCoords.first || (i == maxCoords.first && j < maxCoords.second))) {
                    maxCoords = { i, j };
                }

                if (matrix[i][j] < minElement) {
                    minElement = matrix[i][j];
                    minCoords = { i, j };
                }
                else if (matrix[i][j] == minElement && (i > minCoords.first || (i == minCoords.first && j > minCoords.second))) {
                    minCoords = { i, j };
                }
            }
        }

        cout << "Максимальный элемент: " << maxElement << " Координаты: (" << maxCoords.first << ", " << maxCoords.second << ")" << endl;
        cout << "Минимальный элемент: " << minElement << " Координаты: (" << minCoords.first << ", " << minCoords.second << ")" << endl;

    }
    break;
    case 5:
    {
        laba_6_5::laba6();
    }
    break;
    default:
        break;
    }
}

void labaWork_7() {

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
            labaWork_7(); // Перезагрузка программы 
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
        string w = "алигортм";

        swap(w[5], w[2]);
        swap(w[2], w[3]);
        swap(w[3], w[4]);

        cout << w << endl;
    }
    break;
    case 2:
    {
        string sentence;
        char searchChar;
        int count = 0;

        // Получение предложения и символа для поиска
        cout << "Введите предложение: ";
        cin >> sentence;
        cout << "Введите символ для поиска: ";
        cin >> searchChar;

        // Подсчет количества вхождений символа
        for (char ch : sentence) {
            if (ch == searchChar) {
                ++count;
            }
        }

        // Вывод результата
        cout << "Количество вхождений символа '" << searchChar << "': " << count << endl;
    }
    break;
    case 3:
    {

        string word;
        unordered_map <char, int> frequency; // ассоциативный массив

        
        cout << "Введите слово: ";
        cin >> word;

        // Подсчет вхождений каждой буквы
        for (char ch : word) {
            ++frequency[ch];
        }

        // Вывод букв, встречающихся один раз
        for (char ch : word) {
            if (frequency[ch] == 1) {
                cout << ch;
            }
        }
        cout << endl;
    }
    break;
    case 4:
    {
        laba_7_4::main1();
    }
    break;
    case 5:
    {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);

        cout << "Введите строку:\n";

        string str;

        // Ensure that cin ignores any characters left in the input buffer.
        if (cin.peek() == '\n') cin.ignore();

        getline(cin, str);

        // Convert to lowercase
        transform(str.begin(), str.end(), str.begin(), ::tolower);

        // Split string into words
        istringstream iss(str);
        vector<string> words;
        string word;
        while (iss >> word) {
            words.push_back(word);
        }

        int errorCount = 0;
       
        for (const auto& w : words) {
            cout << w << endl;

            if (w.find("жи") != string::npos || w.find("ши") != string::npos) {
                cout << "Правильно!\n";
            }
            else if (w.find("жы") != string::npos || w.find("шы") != string::npos) {
                cout << "Неправильно! Жи/Ши пиши с буквой 'и'\n";
                ++errorCount;
            }
            else {
                cout << "Для этого слова правило не применяется\n";
            }
        }
        cout << "Количество ошибок: " << errorCount << endl;

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

    if (labN < 1 || labN > 7)
    {

        cout << "Вы ввели неправильный номер лабораторной работы";

        abort;

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
    case 6:
    {
        labaWork_6();
    }
    case 7:
    {
        labaWork_7();
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
    return 0;
}