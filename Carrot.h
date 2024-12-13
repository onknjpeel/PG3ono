#pragma once
#include "Vegetable.h"

class Carrot : public Vegitable
{
public:
	Carrot() :Vegitable("Carrot", "orange") { printf("This name is %s\n", name); }
	void Mood() { printf("%s is %s\n", name, color); }
};