#pragma once

extern "C" {

	struct Mat3
	{
		float x1, y1, z1;
		float x2, y2, z2;
		float x3, y3, z3;
	};

	__declspec(dllexport) Mat3 Mat3Multiply(Mat3 a, Mat3 b);
	__declspec(dllexport) Mat3 Mat3MultiplyF(Mat3 a, float v);
}

Mat3 operator * (Mat3 a, Mat3 b);
Mat3 operator * (Mat3 a, float v);