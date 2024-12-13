#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include "Enemy.h"
#include "TempClass.h"
#include "Vegetable.h"
#include "Cabbage.h"
#include "Carrot.h"
#include "EggPrant.h"

int main() {
	SetConsoleOutputCP(65001);

	Vegitable* vegitable[3] = { new Cabbage,new Carrot,new EggPrant };

	puts("");

	for (int i = 0; i < 3; i++) {
		vegitable[i]->Mood();
	}

	for (int i = 0; i < 3; i++) {
		delete vegitable[i];
	}

	return 0;
}