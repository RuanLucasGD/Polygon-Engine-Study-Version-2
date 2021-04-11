#include "vec4.h"

#include "mathematics.h"


Vec4 Vec4Sum(Vec4 a, Vec4 b) {

	return {

		a.x + b.x,
		a.y + b.y,
		a.z + b.z,
		a.w + b.w
	};
}

Vec4 Vec4Subtract(Vec4 a, Vec4 b) {

	return {

		a.x - b.x,
		a.y - b.y,
		a.z - b.z,
		a.w - b.w
	};
}

Vec4 Vec4Multiply(Vec4 a, Vec4 b) {

	return {

		a.x * b.x,
		a.y * b.y,
		a.z * b.z,
		a.w * b.w
	};
}

Vec4 Vec4Divide(Vec4 a, Vec4 b) {

	return {

		a.x / b.x,
		a.y / b.y,
		a.z / b.z,
		a.w / b.w
	};
}

Vec4 Vec4MultiplyF(Vec4 a, float v) {

	return {

		a.x * v,
		a.y * v,
		a.z * v,
		a.w * v
	};
}

Vec4 Vec4DivideF(Vec4 a, float v) {

	return {

		a.x / v,
		a.y / v,
		a.z / v,
		a.w / v
	};
}

float Vec4Magnetude(Vec4 v) {

	float x = v.x * v.x;
	float y = v.y * v.y;
	float z = v.z * v.z;
	float w = v.w * v.w;

	return Sqrt(x + y + z + w);
}

float Vec4Dot(Vec4 a, Vec4 b) {

	return {

		a.x * b.x +
		a.y * b.y +
		a.z * b.z +
		a.w * b.w
	};
}

float Vec4Distance(Vec4 a, Vec4 b) {

	return Sqrt(

		Pow(a.x - b.x) +
		Pow(a.y - b.y) +
		Pow(a.z - b.z) +
		Pow(a.w - b.w)
	);
}

Vec4 Vec4Normalize(Vec4 v) {

	return v / Vec4Magnetude(v);
}

Vec4 Vec4Lerp(Vec4 a, Vec4 b, float t) {

	return{

		Lerp(a.x, b.x, t),
		Lerp(a.y, b.y, t),
		Lerp(a.z, b.z, t),
		Lerp(a.w, b.w, t)
	};
}

Vec4 operator + (Vec4 a, Vec4 b) { return Vec4Sum(a, b); }

Vec4 operator - (Vec4 a, Vec4 b) { return Vec4Subtract(a, b); }

Vec4 operator * (Vec4 a, Vec4 b) { return Vec4Multiply(a, b); }

Vec4 operator / (Vec4 a, Vec4 b) { return Vec4Divide(a, b); }

Vec4 operator * (Vec4 a, float v) { return Vec4MultiplyF(a, v); }

Vec4 operator / (Vec4 a, float v) { return Vec4DivideF(a, v); }
