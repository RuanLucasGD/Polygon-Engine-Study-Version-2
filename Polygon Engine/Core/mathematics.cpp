#include "mathematics.h"

#include <math.h>

float Sqrt(float v) {

	return sqrtf(v);
}
float RadToDegress(float r) {

	return r * PI_RAD;
}

float DegressToRad(float d) {

	return d / PI_RAD;
}

float Abs(float v) {

	return v > 0 ? v : v * -1;
}

float Sin(float r) {

	return sinf(r);
}

float Cos(float r) {

	return cosf(r);
}

float Tan(float r) {

	return tan(r);
}

float Asin(float r) {

	return asinf(r);
}

float Asos(float r) {

	return acosf(r);
}

float Atan(float r) {

	return atan(r);
}

float Lerp(float a, float b, float t) {

	return ((1 - t) * a) + (b * t);
}

float Min(float a, float b) {

	return a < b ? a : b;
}

float Max(float a, float b) {

	return a > b ? a : b;
}

float Clamp(float v, float min, float max) {

	if (v < min) v = min;
	if (v > max) v = max;
	return v;
}

float Pow(float a, float p) {

	return pow(a, p);
}