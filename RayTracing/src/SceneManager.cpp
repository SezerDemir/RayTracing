#include "SceneManager.h"

Vec3 SceneManager::getBackground() {
	return background;
}

Camera SceneManager::getCamera() {
	return camera;
}

void SceneManager::setBackground(Vec3 rgb){
	background = rgb;
}

Camera& SceneManager::setCamera(Camera camera) {
	return this->camera = camera;
}