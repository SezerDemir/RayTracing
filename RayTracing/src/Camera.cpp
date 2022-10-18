#include "Camera.h"

int* Camera::getResolution() {
	return resolution;
}

Vec3 Camera::getPosition() {
	return position;
}

void Camera::setPosition(Vec3 position) {
	this->position = position;
}

void Camera::setResolution(int width, int height) {
	resolution[0] = width;
	resolution[1] = height;
}

std::string Camera::toString() {
	return "Resolution = (" + std::to_string(resolution[0]) + ", " + std::to_string(resolution[1]) + ")";
}
