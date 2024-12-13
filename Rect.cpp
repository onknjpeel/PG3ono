#include "Rect.h"

void Rect::Size()
{
	radius = 5.0f;
	printf("rect's radius %f\n", radius);
	size = radius * 2.0f * radius * 2.0f;
}
