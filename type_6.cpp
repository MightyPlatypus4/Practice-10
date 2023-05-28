#include <iostream>
#include <cmath>
#include "type_6.h"

type6::type6(double a1, double b1, double c1) {
	A = a1;
	B = b1;
	C = c1;
}
void type6::Get_answer() {
	double D = B * B - 4 * A * C;
	if (D < 0) {
		std::cout << "Уравнение не имеет действительных корней" << std::endl;
	}
	else {
		if (D == 0) {
			double x = ((-1) * B - sqrt(D)) / (2 * A);
			std::cout << "Корень уравнения" << x << std::endl;
		}
		else {
			double x1 = ((-1) * B - sqrt(D)) / (2 * A);
			double x2 = ((-1) * B + sqrt(D)) / (2 * A);
			std::cout << "Корни уравнения: " << std::endl;
			std::cout << "X1= " << x1 << std::endl << "X2= " << x2 << std::endl;
		}
	}
}
void type6::show() {
	std::cout<<"Уравнение "<< A << "*x^2 + "<<B<<"*x + "<<C<<" = 0"<<std::endl;
}