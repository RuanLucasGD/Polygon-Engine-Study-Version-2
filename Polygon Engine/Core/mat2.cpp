#include "mat2.h"

Mat2 Mat2Sum(Mat2 a, Mat2 b) {

	return {

		a.x1 + b.x1,
		a.y1 + b.y1,

		a.x2 + b.x2,
		a.y2 + b.y2
	};
}
Mat2 Mat2Subtract(Mat2 a, Mat2 b) {

	return {

		a.x1 - b.x1,
		a.y1 - b.y1,

		a.x2 - b.x2,
		a.y2 - b.y2
	};
}

Mat2 Mat2Multiply(Mat2 a, Mat2 b) {

	return {

		a.x1 * b.x1 + a.y1 * b.x2,
		a.x1 * b.y1 + a.y1 * b.y2,

		a.x2 * b.x1 + a.y2 * b.x2,
		a.x2 * b.y1 + a.y2 * b.y2
	};
}

Mat2 Mat2MultiplyF(Mat2 a, float v) {

	return {

		a.x1 * v,
		a.y1 * v,

		a.x2 * v,
		a.y2 * v
	};
}

Mat2 operator + (Mat2 a, Mat2 b) { return Mat2Sum(a, b); }

Mat2 operator - (Mat2 a, Mat2 b) { return Mat2Subtract(a, b); }

Mat2 operator * (Mat2 a, Mat2 b) { return Mat2Multiply(a, b); }

Mat2 operator * (Mat2 a, float v) { return Mat2MultiplyF(a, v); }
