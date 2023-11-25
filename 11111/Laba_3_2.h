#pragma once
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
namespace MySpace {

	void Laba() {

        double x = 0, x1 = 0, x2 = 0, x3 = 0, P = 0, R = 0, I = 0, a = 0, b = 0, d = 0, c = 0, v = 0, t = 0, mgh = 0, mg = 0, v0 = 0, m = 0, g = 0, h = 0, r1 = 0, r2 = 0, r = 0, m1 = 0, m2 = 0, i = 0;
        const double PI = 3.1415926535;

        double exp1 = sqrt(pow(x1, 2) + pow(x2, 2)); 

        double exp2 = (x1 * x2) + (x1 * x3) + (x2 * x3); 

        double exp3 = (v0 * t) + ((a * pow(t, 2)) / 2); 

        double exp4 = ((m * pow(v, 2)) / 2) + m * g * h; 

        double exp5 = (1 / r1) + (1 / r2); 

        double exp6 = (m * g * cos(a)); 

        double exp8 = 2 * PI * r; 

        double exp9 = pow(b, 2) - (4 * a * c); 

        double exp10 = ((m1 * m2) / pow(r, 2)); 

        double exp11 = pow(i, 2) * r; 

        double exp12 = a * b * sin(c); 

        double exp13 = sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(c)); 

        double exp14 = ((a * b) + (b * c)) / (a * d); 

        double exp15 = sqrt(1 - pow(sin(x), 2)); 

        double exp16 = 1 / (sqrt(a * pow(x, 2)) + (b * x) + c); 

        double exp17 = abs(x) + abs(x + 1); 

        double exp18 = abs(1 - abs(x));

        
	}

	}


