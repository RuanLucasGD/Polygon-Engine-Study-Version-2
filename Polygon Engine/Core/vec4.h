#pragma once

extern "C" {

	struct Vec4
	{
		float x;
		float y;
		float z;
		float w;
	};

	__declspec(dllexport) Vec4 Vec4Sum(Vec4 a, Vec4 b);
	__declspec(dllexport) Vec4 Vec4Subtract(Vec4 a, Vec4 b);
	__declspec(dllexport) Vec4 Vec4Multiply(Vec4 a, Vec4 b);
	__declspec(dllexport) Vec4 Vec4Divide(Vec4 a, Vec4 b);

	__declspec(dllexport) Vec4 Vec4MultiplyF(Vec4 a, float v);
	__declspec(dllexport) Vec4 Vec4DivideF(Vec4 a, float v);

	__declspec(dllexport) float Vec4Magnetude(Vec4 v);
	__declspec(dllexport) float Vec4Dot(Vec4 a, Vec4 b);
	__declspec(dllexport) float Vec4Distance(Vec4 a, Vec4 b);

	__declspec(dllexport) Vec4 Vec4Normalize(Vec4 v);
	__declspec(dllexport) Vec4 Vec4Lerp(Vec4 a, Vec4 b, float t);
}

Vec4 operator - (Vec4 a, Vec4 b);
Vec4 operator + (Vec4 a, Vec4 b);
Vec4 operator * (Vec4 a, Vec4 b);
Vec4 operator / (Vec4 a, Vec4 b);
Vec4 operator * (Vec4 a, float v);
Vec4 operator / (Vec4 a, float v);

