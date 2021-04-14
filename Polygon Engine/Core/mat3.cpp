#include "mat3.h"

Mat3 Mat3Multiply(Mat3 a, Mat3 b) {

	return {

		(a.x1 * b.x1) + (a.y1 * b.x2) + (a.z1 * b.x3),
		(a.x1 * b.y1) + (a.y1 * b.y2) + (a.z1 * b.y3),
		(a.x1 * b.z1) + (a.y1 * b.z2) + (a.z1 * b.z3),

		(a.x2 * b.x1) + (a.y2 * b.x2) + (a.z2 * b.x3),
		(a.x2 * b.y1) + (a.y2 * b.y2) + (a.z2 * b.y3),
		(a.x2 * b.z1) + (a.y2 * b.z2) + (a.z2 * b.z3),

		(a.x3 * b.x1) + (a.y3 * b.x2) + (a.z3 * b.x3),
		(a.x3 * b.y1) + (a.y3 * b.y2) + (a.z3 * b.y3),
		(a.x3 * b.z1) + (a.y3 * b.z2) + (a.z3 * b.z3)
	};
}

Mat3 Mat3MultiplyF(Mat3 a, float v) {

	return {

		a.x1 * v,
		a.y1 * v,
		a.z1 * v,

		a.x2 * v,
		a.y2 * v,
		a.z2 * v,

		a.x3 * v,
		a.y3 * v,
		a.z3 * v,
	};
}

Mat3 operator * (Mat3 a, Mat3 b) { return Mat3Multiply(a, b); }

Mat3 operator * (Mat3 a, float v) { return Mat3MultiplyF(a, v); }