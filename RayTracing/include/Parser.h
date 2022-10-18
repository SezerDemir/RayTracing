#pragma once
#include <string>
#include "Utility.h"
#include "SceneManager.h"
class Parser {
public:
	Parser(std::string filePath);
	bool parse(SceneManager& sceneManager);
private:
	std::string filePath;
	
};