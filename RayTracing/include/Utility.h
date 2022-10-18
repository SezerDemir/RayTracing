#pragma once
#include <ostream>

struct Vec3 {
	float x;
	float y;
	float z;

	Vec3(): x(0.0f), y(0.0f), z(0.0f){};
	Vec3(float x, float y, float z): x(x), y(y), z(z){};

	Vec3 operator+ (const Vec3 v) const {
		return Vec3(x + v.x, y + v.y, z + v.z);
	}
	Vec3 operator- (const Vec3 v) const {
		return Vec3(x - v.x, y - v.y, z - v.z);
	}
	Vec3 operator* (const Vec3 v) const { // (bz – cy)i + (cx – az)j + (ay – bx)k
		return Vec3(y*v.z - z*v.y, z*v.x - x*v.z, x*v.y - y*v.x);
	}
};

std::ostream& operator<<(std::ostream& output, const Vec3& v);