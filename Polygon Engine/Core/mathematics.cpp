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

	return fabsf(v);
}

float Sin(float r) {

	return sinf(r);
}

float Cos(float r) {

	return cosf(r);
}

float Tan(float r) {

	return tanf(r);
}

float Asin(float r) {

	return asinf(r);
}

float Acos(float r) {

	return acosf(r);
}

float Atan(float r) {

	return atanf(r);
}

float Lerp(float a, float b, float t) {

	return ((1 - t) * a) + (b * t);
}

float Min(float a, float b) {

	return fminf(a, b);
}

float Max(float a, float b) {

	return fmaxf(a, b);
}

float Clamp(float v, float min, float max) {

	return v > max ? max : v < min ? min : v;
}

float Pow(float a, float p) {

	return powf(a, p);
}