#include "Parser.h"
#include "libraries/nlohmann/json.hpp"
#include <fstream>
#include <iostream>


Parser::Parser(std::string filePath) : filePath(filePath){};

bool Parser::parse(SceneManager& sceneManager) {
	std::ifstream file(filePath);
	if(file.fail()){
		std::cerr << "json scene description file does not exist\n";
		return false;
	}
	nlohmann::json data = nlohmann::json::parse(file);

	if (!data.contains("Background")) {
		std::cerr << "'Background' key is missing in scene description file\n";
		return false;
	}
	sceneManager.setBackground(Vec3(data["Background"]["color"][0], data["Background"]["color"][1], data["Background"]["color"][2]));


	Camera camera = Camera();
	if (!data.contains("Camera")) {
		std::cerr << "'Camera' key is missing in scene description file\n";
		return false;
	}
	camera.setResolution(data["Camera"]["resolution"][0], data["Camera"]["resolution"][1]);
	camera.setPosition(Vec3(data["Camera"]["position"][0], data["Camera"]["position"][1], 
		data["Camera"]["position"][2]));
	sceneManager.setCamera(camera);



	std::cout << sceneManager.getCamera().toString();
	file.close();
	return true;
}
