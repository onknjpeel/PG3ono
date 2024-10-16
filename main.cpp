#include <stdio.h>
#include <Windows.h>
#include <time.h>

int ShakeDice() {
	unsigned int CurrentTime = time(nullptr);
	srand(CurrentTime);
	int dice = rand() % 6 + 1;
	return dice;
}

typedef void(*PFunk)(int *);

void Shuffle(int* s) {
	printf("I'm currently shuffling...\nPlease wait %d second...",*s);
}

void SetTimeOut(PFunk p, int second) {
	Sleep(1000 * second);
	p(&second);
}

int main() {
	SetConsoleOutputCP(65001);

	int(*dice)();
	dice = ShakeDice;

	int diceNum = dice();

	int result = diceNum % 2;

	int answer = 0;

	PFunk p;
	p = Shuffle;

	printf("Odd or Even?\n1 : Odd   2 : Even\n");
	scanf_s("%d", &answer);
	if (answer == result) {
		SetTimeOut(p, 3);
		printf("dice is %d\n", diceNum);
		Sleep(1000);
		printf("You win!");
	}
	else {
		SetTimeOut(p, 3);
		printf("dice is %d\n", diceNum);
		Sleep(1000);
		printf("You lose...");
	}


	return 0;
}