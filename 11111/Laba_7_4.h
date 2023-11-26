#pragma once
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (tolower(str[left]) != tolower(str[right])) { // Игнорирование регистра
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

string removeSpacesAndPunctuation(const string& str) {
    string result;
    for (char ch : str) {
        if (isalpha(ch)) { // Проверка, является ли символ буквой
            result += tolower(ch); // Добавление символа в результат с приведением к нижнему регистру
        }
    }
    return result;
}

string removeSpaces(const string& str) {
    string noSpaces;
    for (char ch : str) {
        if (ch != ' ') {
            noSpaces += ch;
        }
    }
    return noSpaces;
}

 namespace laba_7_4 {

	 int laba7() 
	 {
         string input;
         cout << "Введите слово или предложение: ";
         cin >> input;
         getline(cin, input); // Чтение строки целиком

         // Удаление пробелов и знаков пунктуации, приведение к нижнему регистру
         input = removeSpacesAndPunctuation(input);

         // Проверка на палиндромность
         cout << (isPalindrome(input) ? "Является палиндромом." : "Не является палиндромом.") << endl;
         return 0;
	}

}