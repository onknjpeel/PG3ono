#pragma once
class Enemy
{
public:
	void Approach();

	void Shoot();

	void BreakAway();

	void Update();

	static void (Enemy::* spFuncTable[])();

private:

	int index = 0;

	int scanNum = 0;

};