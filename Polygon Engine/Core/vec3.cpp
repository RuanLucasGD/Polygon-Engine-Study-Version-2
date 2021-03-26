#include "vec3.h"

#include <math.h>

Vec3 MultiplyF(const Vec3& a, float v) {

	return {

		a.x * v,
		a.y * v,
		a.z * v
	};
}

Vec3 Sum(const Vec3& a, const Vec3& b) {

	return {

		a.x + b.x,
		a.y + b.y,
		a.z + b.z
	};
}

Vec3 Subtract(const Vec3& a, const Vec3& b) {

	return {

		a.x - b.x,
		a.y - b.y,
		a.z - b.z
	};
}

Vec3 Multiply(const Vec3& a, const Vec3& b) {

	return {

		a.x * b.x,
		a.y * b.y,
		a.z * b.z
	};
}

Vec3 Divide(const Vec3& a, const Vec3& b) {

	return {

		a.x / b.x,
		a.y / b.y,
		a.z / b.z
	};
}

Vec3 DivideF(const Vec3& a, float v) {

	return {

		a.x / v,
		a.y / v,
		a.z / v
	};
}

float Magnetude(Vec3 v) {

	float x = v.x * v.x;
	float y = v.y * v.y;
	float z = v.z * v.z;

	return sqrtf(x + y + z);
}

Vec3 Normalize(Vec3 v) { return v / Magnetude(v); }

Vec3 operator + (const Vec3& a, const Vec3& b) { return Sum(a, b); }

Vec3 operator - (const Vec3& a, const Vec3& b) { return Subtract(a, b); }

Vec3 operator * (const Vec3& a, const Vec3& b) { return Multiply(a, b); }

Vec3 operator / (const Vec3& a, const Vec3& b) { return Divide(a, b); }

Vec3 operator * (const Vec3& a, float v) { return MultiplyF(a, v); }

Vec3 operator / (const Vec3& a, float v) { return DivideF(a, v); }