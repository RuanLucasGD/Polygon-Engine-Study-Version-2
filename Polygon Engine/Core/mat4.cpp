#include "mat4.h"

Mat4 Mat4Multiply(Mat4 a, Mat4 b) {

	return {

		(a.x1 * b.x1) + (a.y1 * b.x2) + (a.z1 * b.x3) + (a.w1 * b.x4),
		(a.x1 * b.y1) + (a.y1 * b.y2) + (a.z1 * b.y3) + (a.w1 * b.y4),
		(a.x1 * b.z1) + (a.y1 * b.z2) + (a.z1 * b.z3) + (a.w1 * b.z4),
		(a.x1 * b.w1) + (a.y1 * b.w2) + (a.z1 * b.w3) + (a.w1 * b.w4),

		(a.x2 * b.x1) + (a.y2 * b.x2) + (a.z2 * b.x3) + (a.w2 * b.x4),
		(a.x2 * b.y1) + (a.y2 * b.y2) + (a.z2 * b.y3) + (a.w2 * b.y4),
		(a.x2 * b.z1) + (a.y2 * b.z2) + (a.z2 * b.z3) + (a.w2 * b.z4),
		(a.x2 * b.w1) + (a.y2 * b.w2) + (a.z2 * b.w3) + (a.w2 * b.w4),

		(a.x3 * b.x1) + (a.y3 * b.x2) + (a.z3 * b.x3) + (a.w3 * b.x4),
		(a.x3 * b.y1) + (a.y3 * b.y2) + (a.z3 * b.y3) + (a.w3 * b.y4),
		(a.x3 * b.z1) + (a.y3 * b.z2) + (a.z3 * b.z3) + (a.w3 * b.z4),
		(a.x3 * b.w1) + (a.y3 * b.w2) + (a.z3 * b.w3) + (a.w3 * b.w4),

		(a.x4 * b.x1) + (a.y4 * b.x2) + (a.z4 * b.x3) + (a.w4 * b.x4),
		(a.x4 * b.y1) + (a.y4 * b.y2) + (a.z4 * b.y3) + (a.w4 * b.y4),
		(a.x4 * b.z1) + (a.y4 * b.z2) + (a.z4 * b.z3) + (a.w4 * b.z4),
		(a.x4 * b.w1) + (a.y4 * b.w2) + (a.z4 * b.w3) + (a.w4 * b.w4)
	};
}

Mat4 Mat4MultiplyF(Mat4 a, float v) {

	return {

		a.x1 * v,
		a.y1 * v,
		a.z1 * v,
		a.w1 * v,

		a.x2 * v,
		a.y2 * v,
		a.z2 * v,
		a.w2 * v,

		a.x3 * v,
		a.y3 * v,
		a.z3 * v,
		a.w3 * v,

		a.x4 * v,
		a.y4 * v,
		a.z4 * v,
		a.w4 * v,
	};
}

std::vector<float> Mat4Data(Mat4 m) {

	return {
		m.x1, m.y1, m.z1, m.w1,
		m.x2, m.y2, m.z2, m.w2,
		m.x3, m.y3, m.z3, m.w3,
		m.x4, m.y4, m.z4, m.w4
	};
}

Mat4 operator * (Mat4 a, Mat4 b) { return Mat4Multiply(a, b); }

Mat4 operator * (Mat4 a, float v) { return Mat4MultiplyF(a, v); }