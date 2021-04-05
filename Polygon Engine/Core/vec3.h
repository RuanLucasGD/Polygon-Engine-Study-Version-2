#pragma once


extern "C" {

	struct Vec3 {

		float x;
		float y;
		float z;
	};

	__declspec(dllexport) Vec3 Vec3Sum(const Vec3& a, const Vec3& b);
	__declspec(dllexport) Vec3 Vec3Subtract(const Vec3& a, const Vec3& b);
	__declspec(dllexport) Vec3 Vec3Multiply(const Vec3& a, const Vec3& b);
	__declspec(dllexport) Vec3 Vec3Divide(const Vec3& a, const Vec3& b);

	__declspec(dllexport) Vec3 Vec3MultiplyF(const Vec3& a, float v);
	__declspec(dllexport) Vec3 Vec3DivideF(const Vec3& a, float v);

	//------------------------------------------------------------------

	__declspec(dllexport) float Vec3Magnetude(Vec3 v);
	__declspec(dllexport) float Vec3Dot(Vec3 a, Vec3 b);
	__declspec(dllexport) float Vec3AngleBetween(Vec3 a, Vec3 b);
	__declspec(dllexport) float Vec3Distance(Vec3 a, Vec3 b);

	__declspec(dllexport) Vec3 Vec3Normalize(Vec3 v);
	__declspec(dllexport) Vec3 Vec3Cross(Vec3 a, Vec3 b);
	__declspec(dllexport) Vec3 Vec3Lerp(Vec3 a, Vec3 b, float t);
}

Vec3 operator - (const Vec3& a, const Vec3& b);
Vec3 operator + (const Vec3& a, const Vec3& b);
Vec3 operator * (const Vec3& a, const Vec3& b);
Vec3 operator / (const Vec3& a, const Vec3& b);
Vec3 operator * (const Vec3& a, float v);
Vec3 operator / (const Vec3& a, float v);
