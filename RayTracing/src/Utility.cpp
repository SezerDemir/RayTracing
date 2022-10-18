#include "Utility.h"

std::ostream& operator<<(std::ostream& output, const Vec3& v) {
	output << v.x << " " << v.y << " " << v.z;
	return output;
}