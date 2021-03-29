#include "vec3.h"

#include "mathematics.h"

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

float VectorMagnetude(Vec3 v) {

	float x = v.x * v.x;
	float y = v.y * v.y;
	float z = v.z * v.z;

	return Sqrt(x + y + z);
}

Vec3 VectorNormalize(Vec3 v) {

	return v / VectorMagnetude(v);
}

Vec3 VectorLerp(Vec3 a, Vec3 b, float t) {

	return{

		Lerp(a.x, b.x, t),
		Lerp(a.y, b.y, t),
		Lerp(a.z, b.z, t)
	};
}

float VectorDot(Vec3 a, Vec3 b) {

	float x = a.x * b.x;
	float y = a.y * b.y;
	float z = a.z * b.z;
	return x + y + z;
}

float VectorAngleBetween(Vec3 a, Vec3 b) {

	float angle = Acos(VectorDot(a, b));	// in radians
	return RadToDegress(angle);
}

Vec3 VectorCross(Vec3 a, Vec3 b) {

	return {

		a.y * b.z - a.z * b.y,
		a.z * b.x - a.x * b.z,
		a.x * b.y - a.y * b.x
	};
}

Vec3 operator + (const Vec3& a, const Vec3& b) { return Sum(a, b); }

Vec3 operator - (const Vec3& a, const Vec3& b) { return Subtract(a, b); }

Vec3 operator * (const Vec3& a, const Vec3& b) { return Multiply(a, b); }

Vec3 operator / (const Vec3& a, const Vec3& b) { return Divide(a, b); }

Vec3 operator * (const Vec3& a, float v) { return MultiplyF(a, v); }

Vec3 operator / (const Vec3& a, float v) { return DivideF(a, v); }