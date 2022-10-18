#include <stdlib.h>
#include <iostream>
#include "Parser.h"
#include "SceneManager.h"
#include "Renderer.h"

int main() {
	Parser parser = Parser("scene.json");
	SceneManager sceneManager = SceneManager();
	if (!parser.parse(sceneManager)) {
		return 0;
	}

	Renderer renderer = Renderer(sceneManager);
	renderer.render();
	return 0;
}