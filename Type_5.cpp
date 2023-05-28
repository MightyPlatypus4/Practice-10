#include <iostream>
#include <cmath>
#include "type_5.h"

type5::type5(double b1, double c1) {
	B = b1;
	C = c1;
}
void type5::Get_answer() {
	std::cout << "Корень уравнения" << (-1) * (C / B) << std::endl;
}
void type5::show() {
	std::cout << "Уравнение" << B << "*x+" << C << "=0" << std::endl;
}