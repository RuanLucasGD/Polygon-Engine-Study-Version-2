#include "vec3.h"

#include "mathematics.h"

Vec3 Vec3MultiplyF(const Vec3& a, float v) {

	return {

		a.x * v,
		a.y * v,
		a.z * v
	};
}

Vec3 Vec3Sum(const Vec3& a, const Vec3& b) {

	return {

		a.x + b.x,
		a.y + b.y,
		a.z + b.z
	};
}

Vec3 Vec3Subtract(const Vec3& a, const Vec3& b) {

	return {

		a.x - b.x,
		a.y - b.y,
		a.z - b.z
	};
}

Vec3 Vec3Multiply(const Vec3& a, const Vec3& b) {

	return {

		a.x * b.x,
		a.y * b.y,
		a.z * b.z
	};
}

Vec3 Vec3Divide(const Vec3& a, const Vec3& b) {

	return {

		a.x / b.x,
		a.y / b.y,
		a.z / b.z
	};
}

Vec3 Vec3DivideF(const Vec3& a, float v) {

	return {

		a.x / v,
		a.y / v,
		a.z / v
	};
}

float Vec3Magnetude(Vec3 v) {

	float x = v.x * v.x;
	float y = v.y * v.y;
	float z = v.z * v.z;

	return Sqrt(x + y + z);
}

float Vec3Dot(Vec3 a, Vec3 b) {

	return {

		a.x * b.x +
		a.y * b.y +
		a.z * b.z
	};
}

float Vec3AngleBetween(Vec3 a, Vec3 b) {

	float angle = Acos(Vec3Dot(a, b));	// in radians
	return RadToDegress(angle);
}

float Vec3Distance(Vec3 a, Vec3 b) {

	return Sqrt(

		Pow(a.x - b.x) +
		Pow(a.y - b.y) +
		Pow(a.z - b.z)
	);
}

Vec3 Vec3Normalize(Vec3 v) {

	return v / Vec3Magnetude(v);
}

Vec3 Vec3Lerp(Vec3 a, Vec3 b, float t) {

	return{

		Lerp(a.x, b.x, t),
		Lerp(a.y, b.y, t),
		Lerp(a.z, b.z, t)
	};
}

Vec3 Vec3Cross(Vec3 a, Vec3 b) {

	return {

		a.y * b.z - a.z * b.y,
		a.z * b.x - a.x * b.z,
		a.x * b.y - a.y * b.x
	};
}

Vec3 operator + (const Vec3& a, const Vec3& b) { return Vec3Sum(a, b); }

Vec3 operator - (const Vec3& a, const Vec3& b) { return Vec3Subtract(a, b); }

Vec3 operator * (const Vec3& a, const Vec3& b) { return Vec3Multiply(a, b); }

Vec3 operator / (const Vec3& a, const Vec3& b) { return Vec3Divide(a, b); }

Vec3 operator * (const Vec3& a, float v) { return Vec3MultiplyF(a, v); }

Vec3 operator / (const Vec3& a, float v) { return Vec3DivideF(a, v); }
