#include "Vec2.h"
#include "mathematics.h"

Vec2 Vec2Sum(Vec2 a, Vec2 b) {

	return {

		a.x + b.x,
		a.y + b.y
	};
}


Vec2 Vec2Subtract(Vec2 a, Vec2 b) {

	return {

		a.x - b.x,
		a.y - b.y
	};
}

Vec2 Vec2Multiply(Vec2 a, Vec2 b) {

	return {

		a.x * b.x,
		a.y * b.y
	};
}

Vec2 Vec2Divide(Vec2 a, Vec2 b) {

	return {

		a.x / b.x,
		a.y / b.y
	};
}


Vec2 Vec2MultiplyF(Vec2 a, float v) {

	return {

		a.x * v,
		a.y * v
	};
}

Vec2 Vec2DivideF(Vec2 a, float v) {

	return {

		a.x / v,
		a.y / v
	};
}


float Vec2Magnetude(Vec2 v) {

	return Sqrt(

		v.x * v.x +
		v.y * v.x
	);
}

float Vec2Dot(Vec2 a, Vec2 b) {

	return {

		a.x * b.x +
		a.y * b.y
	};
}

float Vec2AngleBetween(Vec2 a, Vec2 b) {

	float angle = Acos(Vec2Dot(a, b));	// in radians
	return RadToDegress(angle);
}

float Vec2Distance(Vec2 a, Vec2 b) {

	return Sqrt(

		Pow(a.x - b.x) +
		Pow(a.y - b.y)
	);
}

Vec2 Vec2Normalize(Vec2 v) {

	return v / Vec2Magnetude(v);
}

Vec2 Vec2Lerp(Vec2 a, Vec2 b, float t) {

	return{

		Lerp(a.x, b.x, t),
		Lerp(a.y, b.y, t)
	};
}

Vec2 operator + (Vec2 a, Vec2 b) { return Vec2Sum(a, b); }

Vec2 operator - (Vec2 a, Vec2 b) { return Vec2Subtract(a, b); }

Vec2 operator * (Vec2 a, Vec2 b) { return Vec2Multiply(a, b); }

Vec2 operator / (Vec2 a, Vec2 b) { return Vec2Divide(a, b); }

Vec2 operator * (Vec2 a, float v) { return Vec2MultiplyF(a, v); }

Vec2 operator / (Vec2 a, float v) { return Vec2DivideF(a, v); }
