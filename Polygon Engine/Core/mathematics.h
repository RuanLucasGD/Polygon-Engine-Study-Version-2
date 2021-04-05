#pragma once

const float PI = 3.14159274f;		// 180 / PI_RAD
const float PI_RAD = 57.2957795f;	// (180 / PI)

extern "C" {

	__declspec (dllexport) float Sqrt(float v);
	__declspec (dllexport) float RadToDegress(float r);
	__declspec (dllexport) float DegressToRad(float v);
	__declspec (dllexport) float Abs(float v);
	__declspec (dllexport) float Sin(float r);
	__declspec (dllexport) float Cos(float r);
	__declspec (dllexport) float Tan(float r);
	__declspec (dllexport) float Asin(float r);
	__declspec (dllexport) float Acos(float r);
	__declspec (dllexport) float Atan(float r);
	__declspec (dllexport) float Lerp(float a, float b, float t);
	__declspec (dllexport) float Min(float a, float b);
	__declspec (dllexport) float Max(float a, float b);
	__declspec (dllexport) float Clamp(float v, float min, float max);
	__declspec (dllexport) float Pow(float v, float p = 2);
}