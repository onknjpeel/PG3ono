#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include "IShape.h"
#include "Circle.h"
#include "Rect.h"

int main() {
	SetConsoleOutputCP(65001);

	IShape* iShape[2] = { new Circle ,new Rect };

	for (int i = 0; i < 2; ++i) {
		iShape[i]->Size();
	}

	for (int i = 0; i < 2; ++i) {
		iShape[i]->Draw();
	}

	for (int i = 0; i < 2; ++i) {
		delete iShape[i];
	}

	return 0;
}