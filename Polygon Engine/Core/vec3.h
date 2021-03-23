#pragma once

class Vec3
{
private:

	Vec3 Sum(const Vec3& a, const Vec3& b);
	Vec3 Subtract(const Vec3& a, const Vec3& b);
	Vec3 Multiply(const Vec3& a, const Vec3& b);
	Vec3 Divide(const Vec3& a, const Vec3& b);

public:

	float x;
	float y;
	float z;

	Vec3();
	Vec3(float lenght);
	Vec3(float x, float y, float z);

	Vec3 operator + (const Vec3& b);
	Vec3 operator - (const Vec3& b);
	Vec3 operator * (const Vec3& b);
	Vec3 operator / (const Vec3& b);

	Vec3 operator * (const float v);
	Vec3 operator / (const float v);

	void operator += (const Vec3& b);
	void operator -= (const Vec3& b);
	void operator *= (const Vec3& b);
	void operator /= (const Vec3& b);

	void operator *= (const float v);
	void operator /= (const float v);

	static float Magnetude(const Vec3& v);

	static Vec3 Normalize(const Vec3& v);
};

