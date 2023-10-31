#pragma once
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

bool godNumber(int number) {
	int sum = 0;
	for (int i = 1; i < number; i++)
	{
		if (number % i == 0) {
			sum += i;
		}
	}
	return sum == number;
}

namespace Laba5_3 {

	int lab5()
	{
		int number;
		cout << " Введите натуральное число " << endl;
		cin >> number;

		if (godNumber(number)){
			cout << "Число " << number << " является совершенным." << endl;
		}
		else {
			cout << "Число " << number << " не является совершенным." << endl;
		}

		return 0;
	}

	
}