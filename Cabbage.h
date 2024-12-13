#pragma once
#include "Vegetable.h"

class Cabbage : public Vegitable
{
public:
	Cabbage() :Vegitable("Cabbage", "green") { printf("This name is %s\n", name); }
	void Mood() { printf("%s is %s\n", name, color); }
};