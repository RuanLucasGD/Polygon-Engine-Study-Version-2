#include "vec3.h"
#include <math.h>

Vec3::Vec3() {

	x = 0;
	y = 0;
	z = 0;
}

Vec3::Vec3(float lenght) {

	x = lenght;
	y = lenght;
	z = lenght;
}

Vec3::Vec3(float x, float y, float z) {

	this->x = x;
	this->y = y;
	this->z = z;
}

Vec3 Vec3::Sum(const Vec3& a, const Vec3& b) {

	Vec3 v = Vec3();

	v.x = a.x + b.x;
	v.y = a.y + b.y;
	v.z = a.z + b.z;

	return v;
}

Vec3 Vec3::Subtract(const Vec3& a, const Vec3& b) {

	Vec3 v = Vec3();

	v.x = a.x - b.x;
	v.y = a.y - b.y;
	v.z = a.z - b.z;

	return v;
}

Vec3 Vec3::Multiply(const Vec3& a, const Vec3& b) {

	Vec3 v = Vec3();

	v.x = a.x * b.x;
	v.y = a.y * b.y;
	v.z = a.z * b.z;

	return v;
}

Vec3 Vec3::Divide(const Vec3& a, const Vec3& b) {

	Vec3 v = Vec3();

	v.x = a.x / b.x;
	v.y = a.y / b.y;
	v.z = a.z / b.z;

	return v;
}

Vec3 Vec3::operator + (const Vec3& b) { return Sum(*this, b); }

Vec3 Vec3::operator - (const Vec3& b) { return Subtract(*this, b); }

Vec3 Vec3::operator * (const Vec3& b) { return Multiply(*this, b); }

Vec3 Vec3::operator / (const Vec3& b) { return Divide(*this, b); }

//==========================================================================//

Vec3 Vec3::operator * (const float v) { return Multiply(*this, Vec3(v)); }

Vec3 Vec3::operator / (const float v) { return Divide(*this, Vec3(v)); }

//==========================================================================//

void Vec3::operator += (const Vec3& b) {

	this->x += b.x;
	this->y += b.y;
	this->z += b.z;
}

void Vec3::operator -= (const Vec3& b) {

	this->x -= b.x;
	this->y -= b.y;
	this->z -= b.z;
}

void Vec3::operator *= (const Vec3& b) {

	this->x *= b.x;
	this->y *= b.y;
	this->z *= b.z;

}
void Vec3::operator /= (const Vec3& b) {

	this->x /= b.x;
	this->y /= b.y;
	this->z /= b.z;

}

void Vec3::operator *= (const float v) {

	this->x *= v;
	this->y *= v;
	this->z *= v;
}

void Vec3::operator /= (const float v) {

	this->x /= v;
	this->y /= v;
	this->z /= v;
}

float Vec3::Magnetude(const Vec3& vec) {

	float x = vec.x * vec.x;
	float y = vec.y * vec.y;
	float z = vec.z * vec.z;

	float v = sqrtf(x + y + z);
	return v;
}

Vec3 Vec3::Normalize(const Vec3& v) {

	return Vec3(v.x, v.y, v.z) / Magnetude(v);
}