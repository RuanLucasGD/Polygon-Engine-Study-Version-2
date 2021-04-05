#include "vec3.h"

#include "mathematics.h"

namespace vec3 {


	Vec3 MultiplyF(const Vec3& a, float v) {

		return {

			a.x * v,
			a.y * v,
			a.z * v
		};
	}

	Vec3 Sum(const Vec3& a, const Vec3& b) {

		return {

			a.x + b.x,
			a.y + b.y,
			a.z + b.z
		};
	}

	Vec3 Subtract(const Vec3& a, const Vec3& b) {

		return {

			a.x - b.x,
			a.y - b.y,
			a.z - b.z
		};
	}

	Vec3 Multiply(const Vec3& a, const Vec3& b) {

		return {

			a.x * b.x,
			a.y * b.y,
			a.z * b.z
		};
	}

	Vec3 Divide(const Vec3& a, const Vec3& b) {

		return {

			a.x / b.x,
			a.y / b.y,
			a.z / b.z
		};
	}

	Vec3 DivideF(const Vec3& a, float v) {

		return {

			a.x / v,
			a.y / v,
			a.z / v
		};
	}

	float Magnetude(Vec3 v) {

		float x = v.x * v.x;
		float y = v.y * v.y;
		float z = v.z * v.z;

		return math_p::Sqrt(x + y + z);
	}

	float Dot(Vec3 a, Vec3 b) {

		return {

			a.x * b.x +
			a.y * b.y +
			a.z * b.z
		};
	}

	float AngleBetween(Vec3 a, Vec3 b) {

		float angle = math_p::Acos(Dot(a, b));	// in radians
		return math_p::RadToDegress(angle);
	}

	float Distance(Vec3 a, Vec3 b) {

		using namespace math_p;
		return Sqrt(
			Pow(a.x - b.x) +
			Pow(a.y - b.y) +
			Pow(a.z - b.z));
	}

	Vec3 Normalize(Vec3 v) {

		return v / Magnetude(v);
	}

	Vec3 Lerp(Vec3 a, Vec3 b, float t) {

		return{

			math_p::LerpF(a.x, b.x, t),
			math_p::LerpF(a.y, b.y, t),
			math_p::LerpF(a.z, b.z, t)
		};
	}

	Vec3 Cross(Vec3 a, Vec3 b) {

		return {

			a.y * b.z - a.z * b.y,
			a.z * b.x - a.x * b.z,
			a.x * b.y - a.y * b.x
		};
	}

	Vec3 operator + (const Vec3& a, const Vec3& b) { return Sum(a, b); }

	Vec3 operator - (const Vec3& a, const Vec3& b) { return Subtract(a, b); }

	Vec3 operator * (const Vec3& a, const Vec3& b) { return Multiply(a, b); }

	Vec3 operator / (const Vec3& a, const Vec3& b) { return Divide(a, b); }

	Vec3 operator * (const Vec3& a, float v) { return MultiplyF(a, v); }

	Vec3 operator / (const Vec3& a, float v) { return DivideF(a, v); }
}
