#pragma once

#include "vec2.h"

extern "C" {

	struct Mat2
	{
		float x1, y1;
		float x2, y2;
	};

	__declspec(dllexport) Mat2 Mat2Sum(Mat2 a, Mat2 b);
	__declspec(dllexport) Mat2 Mat2Subtract(Mat2 a, Mat2 b);
	__declspec(dllexport) Mat2 Mat2Multiply(Mat2 a, Mat2 b);
	__declspec(dllexport) Mat2 Mat2MultiplyF(Mat2 a, float v);
}

Mat2 operator + (Mat2 a, Mat2 b);
Mat2 operator - (Mat2 a, Mat2 b);
Mat2 operator * (Mat2 a, Mat2 b);
Mat2 operator * (Mat2 a, float v);