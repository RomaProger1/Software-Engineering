#pragma once
#include <iostream>
#include <string>
#include <locale>
#include <cctype>
#include <cwctype>
#include <fcntl.h>  //  _O_U16TEXT
#include <io.h>     //  _setmode

namespace laba_7_4 {
    int main1() {

        // ��������� ������ ��� ��������� ������� � ������� Windows
        _setmode(_fileno(stdout), _O_U16TEXT);
        _setmode(_fileno(stdin), _O_U16TEXT);
        _setmode(_fileno(stderr), _O_U16TEXT);

        wstring phrase, cleanedPhrase;
        wcout << L"������� �����: ";
        getline(wcin, phrase);

        // �������� �������� � ������ ���������� �� ������
        for (wchar_t ch : phrase) {
            if (!iswspace(ch) && !iswpunct(ch)) {
                cleanedPhrase += towlower(ch); // ���������� ������� � ������� ��������
            }
        }

        int start = 0;
        int end = cleanedPhrase.length() - 1;

        while (start < end) {
            if (cleanedPhrase[start] != cleanedPhrase[end]) {
                wcout << L"����� �� �������� �����������" << endl;
                return 0;
            }
            ++start;
            --end;
        }

        wcout << L"����� �������� �����������" << endl;
        return 0;
    }
}