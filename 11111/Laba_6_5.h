#pragma once
#include <iostream>
#include <vector>

using namespace std;

bool isMagicSquare(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    int magicSum = 0;

    // Сумма элементов первой строки
    for (int j = 0; j < n; ++j) {
        magicSum += matrix[0][j];
    }

    int rowSum, colSum, diagSum1 = 0, diagSum2 = 0;

    // Проверка строк, столбцов и диагоналей
    for (int i = 0; i < n; ++i) {
        rowSum = 0;
        colSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += matrix[i][j];
            colSum += matrix[j][i];
        }
        if (rowSum != magicSum || colSum != magicSum) {
            return false;
        }
        diagSum1 += matrix[i][i];
        diagSum2 += matrix[i][n - 1 - i];
    }

    if (diagSum1 != magicSum || diagSum2 != magicSum) {
        return false;
    }

    return true;
}
namespace laba_6_5 {
    int laba6() {
        int n;
        cout << "Введите размерность квадратного массива: ";
        cin >> n;

        vector<vector<int>> matrix(n, vector<int>(n));
        cout << "Введите элементы массива:" << endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> matrix[i][j];
            }
        }

        if (isMagicSquare(matrix)) {
            cout << "Данный массив является магическим квадратом." << endl;
        }
        else {
            cout << "Данный массив не является магическим квадратом." << endl;
        }

        return 0;
    }
}
    
