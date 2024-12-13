#pragma once
#include "Vegetable.h"

class EggPrant : public Vegitable
{
public:
	EggPrant() :Vegitable("EggPrant", "purple") { printf("This name is %s\n", name); }
	void Mood() { printf("%s is %s\n", name, color); }
};