#include "Renderer.h"
#include <iostream>
#include <fstream>

Renderer::Renderer(SceneManager sceneManager) {
	this->sceneManager = sceneManager;
	int row = sceneManager.getCamera().getResolution()[0];
	int column = sceneManager.getCamera().getResolution()[1];
	for (int i = 0; i < row * column; ++i) {
		pixels.push_back(Vec3());
	}
}

Renderer::~Renderer() {

}

void Renderer::render() {
	printPPM(2,3,pixels);
}

void Renderer::printPPM(int resX, int resY, std::vector<Vec3> pixels) {
	std::ofstream file("image.ppm", std::ofstream::out);
	int width = sceneManager.getCamera().getResolution()[0];
	int height = sceneManager.getCamera().getResolution()[1];
	// ppm header
	file << "P3\n" << std::to_string(width) << " " << std::to_string(height) << "\n255\n";

	for (int i = 0; i < width * height; ++i) {
		file << sceneManager.getBackground() << std::endl;
	}


}

void Renderer::printPixels() {
	int c = 0;
	for (int i = 0; i < sceneManager.getCamera().getResolution()[1]; ++i) {
		for (int j = 0; j < sceneManager.getCamera().getResolution()[0]; ++j) {
			std::cout << pixels[c++];
		}
		std::cout << std::endl;
	}
}