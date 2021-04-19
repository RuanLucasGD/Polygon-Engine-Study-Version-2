#pragma once

#include <vector>

extern "C" {

	struct Mat4
	{
		float x1, y1, z1, w1;
		float x2, y2, z2, w2;
		float x3, y3, z3, w3;
		float x4, y4, z4, w4;
	};

	__declspec(dllexport) Mat4 Mat4Multiply(Mat4 a, Mat4 b);
	__declspec(dllexport) Mat4 Mat4MultiplyF(Mat4 a, float v);
}

const Mat4 mat4Identity = {

	1, 0, 0, 0,
	0, 1, 0, 0,
	0, 0, 1, 0,
	0, 0, 0, 1
};

std::vector<float>  Mat4Data(Mat4 m);

Mat4 operator * (Mat4 a, Mat4 b);
Mat4 operator * (Mat4 a, float v);