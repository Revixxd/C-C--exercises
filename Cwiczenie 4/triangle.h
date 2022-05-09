#pragma once

// Declaration of boolean type
#include <stdbool.h>

typedef struct Points {
	double x;
    double y;
} Point_t;

bool isRightTriangle(Point_t points[]);
