#pragma once
#include "IShape.h"
#include <stdio.h>

class Rect : public IShape {
public:
	void Size() override;
	void Draw() { printf("area %f\n", size); };
};