#pragma once
#include <stdio.h>

class Vegitable
{
public:
	Vegitable(const char* a, const char* b) :name(a), color(b) {}
	virtual void Mood() {}

protected:
	const char* name;
	const char* color;
};