#pragma once

extern "C" {

	struct Vec2
	{
		float x;
		float y;
	};

	__declspec(dllexport) Vec2 Vec2Sum(Vec2 a, Vec2 b);
	__declspec(dllexport) Vec2 Vec2Subtract(Vec2 a, const Vec2 b);
	__declspec(dllexport) Vec2 Vec2Multiply(Vec2 a, const Vec2 b);
	__declspec(dllexport) Vec2 Vec2Divide(Vec2 a, const Vec2 b);

	__declspec(dllexport) Vec2 Vec2MultiplyF(const Vec2 a, float v);
	__declspec(dllexport) Vec2 Vec2DivideF(const Vec2 a, float v);

	__declspec(dllexport) float Vec2Magnetude(Vec2 v);
	__declspec(dllexport) float Vec2Dot(Vec2 a, Vec2 b);
	__declspec(dllexport) float Vec2AngleBetween(Vec2 a, Vec2 b);
	__declspec(dllexport) float Vec2Distance(Vec2 a, Vec2 b);

	__declspec(dllexport) Vec2 Vec2Normalize(Vec2 v);
	__declspec(dllexport) Vec2 Vec2Lerp(Vec2 a, Vec2 b, float t);
}

Vec2 operator - (Vec2 a, Vec2 b);
Vec2 operator + (Vec2 a, Vec2 b);
Vec2 operator * (Vec2 a, Vec2 b);
Vec2 operator / (Vec2 a, Vec2 b);
Vec2 operator * (Vec2 a, float v);
Vec2 operator / (Vec2 a, float v);
