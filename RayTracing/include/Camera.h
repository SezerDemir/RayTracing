#pragma once
#include "Utility.h"
#include <utility>
#include <ostream>
#include <string>

class Camera {
public:
	Camera() = default;
	int* getResolution();
	Vec3 getPosition();
	void setPosition(Vec3 position);
	void setResolution(int width, int height);
	std::string toString();
private:
	int resolution[2];
	Vec3 position;
};