#pragma once
#include "Core/Input.h"
#include "Core/Camera.h"
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>


namespace Player
{
	
	glm::vec3 getPosition();
	void setPosition(glm::vec3 pos);
	void Update(float deltaTime);

};

