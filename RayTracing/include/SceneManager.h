#pragma once
#include "Utility.h"
#include "Camera.h"
class SceneManager {
public:
	SceneManager() = default;
	void setBackground(Vec3 rgb);
	Camera& setCamera(Camera camera);
	Camera getCamera();
	Vec3 getBackground();


private:
	Vec3 background;
	Camera camera;
};

