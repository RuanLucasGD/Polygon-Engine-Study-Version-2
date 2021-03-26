#pragma once

extern "C" {

	struct Vec3 {

		float x;
		float y;
		float z;
	};

	__declspec(dllexport) Vec3 Sum(const Vec3& a, const Vec3& b);
	__declspec(dllexport) Vec3 Subtract(const Vec3& a, const Vec3& b);
	__declspec(dllexport) Vec3 Multiply(const Vec3& a, const Vec3& b);
	__declspec(dllexport) Vec3 Divide(const Vec3& a, const Vec3& b);

	__declspec(dllexport) Vec3 MultiplyF(const Vec3& a, float v);
	__declspec(dllexport) Vec3 DivideF(const Vec3& a, float v);

	__declspec(dllexport) float Magnetude(Vec3 v);
	__declspec(dllexport) Vec3 Normalize(Vec3 v);
}

Vec3 operator - (const Vec3& a, const Vec3& b);
Vec3 operator + (const Vec3& a, const Vec3& b);
Vec3 operator * (const Vec3& a, const Vec3& b);
Vec3 operator / (const Vec3& a, const Vec3& b);
Vec3 operator * (const Vec3& a, float v);
Vec3 operator / (const Vec3& a, float v);