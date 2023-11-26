#pragma once
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (tolower(str[left]) != tolower(str[right])) { // ������������� ��������
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
        if (isalpha(ch)) { // ��������, �������� �� ������ ������
            result += tolower(ch); // ���������� ������� � ��������� � ����������� � ������� ��������
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
         cout << "������� ����� ��� �����������: ";
         cin >> input;
         getline(cin, input); // ������ ������ �������

         // �������� �������� � ������ ����������, ���������� � ������� ��������
         input = removeSpacesAndPunctuation(input);

         // �������� �� ��������������
         cout << (isPalindrome(input) ? "�������� �����������." : "�� �������� �����������.") << endl;
         return 0;
	}

}