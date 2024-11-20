#include "Enemy.h"
#include <stdio.h>

void Enemy::Approach()
{
	printf("Approach\n");
	scanf_s("%d", &scanNum);
}

void Enemy::Shoot()
{
	printf("Shoot\n");
	scanf_s("%d", &scanNum);
}

void Enemy::BreakAway()
{
	printf("BreakAway\n");
	scanf_s("%d", &scanNum);
}

void Enemy::Update()
{
	while (index >= 0) {
		if (scanNum == 0) {
			(this->*spFuncTable[index])();
			index++;
			if (index == 3) {
				index = 0;
			}
		}
		else {
			(this->*spFuncTable[index])();
		}
	}
}

void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Shoot,
	&Enemy::BreakAway
};