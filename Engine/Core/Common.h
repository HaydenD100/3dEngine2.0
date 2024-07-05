#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#define SCREENWIDTH 1024
#define SCREENHEIGHT 768
#define WINDOWTITILE "Engine 2.0"


struct Transform {
    glm::vec3 position = glm::vec3(0);
    glm::vec3 rotation = glm::vec3(0);
    glm::vec3 scale = glm::vec3(1);

    glm::vec3 getPosition() {
        return position;
    }
    glm::vec3 getRotation() {
        return rotation;
    }
    glm::vec3 getScale() {
        return scale;
    }

    glm::mat4 to_mat4() {
        glm::mat4 m = glm::translate(glm::mat4(1), position);
        m *= glm::mat4_cast(glm::quat(rotation));
        m = glm::scale(m, scale);
        return m;
    };
};


//I do want to add a mesh instead of storing all the obj info in Gameobject this will also make it easy to allow multiple GameObjects to use the same mesh without loading a model each time
