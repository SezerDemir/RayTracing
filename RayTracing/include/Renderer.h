#pragma once
#include "SceneManager.h"
#include "Utility.h"
#include <vector>



class Renderer {
public:
	Renderer(SceneManager sceneManager);
	~Renderer();
	void render();
	void printPixels();
	void printPPM(int resX, int resY, std::vector<Vec3> pixels);
private:
	SceneManager sceneManager;
	std::vector<Vec3> pixels; // in rgb
};