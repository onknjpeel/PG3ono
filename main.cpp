#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include "Enemy.h"

int main() {
	SetConsoleOutputCP(65001);

	Enemy enemy;

	enemy.Update();

	return 0;
}