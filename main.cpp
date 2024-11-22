#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include "Enemy.h"
#include "TempClass.h"

int main() {
	SetConsoleOutputCP(65001);

	TempClass<int, float> intFloatTemplate(10, 50.0f);
	TempClass<int, double> intDoubleTemplate(80, 13.0);
	TempClass<float, int> floatIntTemplate(2.0f, 9);
	TempClass<float, double> floatDoubleTemplate(11.0f, 3.5);
	TempClass<double, int> doubleIntTemplate(666.0, 333);
	TempClass<double, float> doubleFloatTemplate(435.8, 563.5f);

	std::cout << "int(10):float(50.0f):Min->" << intFloatTemplate.Min() << std::endl;
	std::cout << "int(80):double(13.0):Min->" << intDoubleTemplate.Min() << std::endl;
	std::cout << "float(2.0f):int(9):Min->" << floatIntTemplate.Min() << std::endl;
	std::cout << "float(11.0f):double(3.5):Min->" << floatDoubleTemplate.Min() << std::endl;
	std::cout << "double(666.0):int(333):Min->" << doubleIntTemplate.Min() << std::endl;
	std::cout << "double(435.8):float(563.5):Min->" << doubleFloatTemplate.Min() << std::endl;

	return 0;
}