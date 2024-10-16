#include <stdio.h>
#include <Windows.h>

int Recursive(int time) {
	if (time <= 1) {
		return 100;
	}
	return ((time * 100 - 50) + Recursive(time - 1));
}


int main() {
	SetConsoleOutputCP(65001);
	int time = 22;
	int Rmoney = Recursive(time);

	int Nmoney = 1072 * time;

	printf("Recursive:%d\nNormal:%d", Rmoney, Nmoney);

	return 0;
}