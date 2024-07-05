#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <vector>
#include "GameObject.h"
#include "Common.h"
#include "Renderer.h"

//Json stuff
#include <fstream>
#include <iostream>
#include "Loaders/nlohmann/json.hpp"
using json = nlohmann::json;


namespace AssetManager
{
	void Init();
	void SaveAssets(const char* path);
	void LoadAssets(const char* path);

	//returns index of object
	int AddGameObject(GameObject gameobject);
	int AddGameObject(std::string name, const char* path,Texture* texture, glm::vec3 position);

	int AddTexture(Texture texture);
	int AddTexture(const char* name, const char* path);

	void RemoveGameObject(std::string name);
	void RemoveGameObject(int index);

	GameObject* GetGameObject(std::string name);
	GameObject* GetGameObject(int index);
	std::vector<GameObject> GetAllGameObjects();

	Texture* GetTexture(std::string name);

};

