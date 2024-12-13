#include "Circle.h"

void Circle::Size()
{
	radius = 5.0f;
	printf("circle's radius %f\n", radius);
	size = radius * radius * 3.14f;
}
