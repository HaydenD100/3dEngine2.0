#include "Input.h"
namespace Input {
    //Code taken from Hell2024 engine
    bool keyPressed[372];
    bool keyDown[372];
    bool keyDownLastFrame[372];

    double mouseX = 0;
    double mouseY = 0;
    double mouseOffsetX = 0;
    double mouseOffsetY = 0;

    bool leftMouseDown = false;
    bool rightMouseDown = false;
    bool leftMousePressed = false;
    bool rightMousePressed = false;
    bool leftMouseDownLastFrame = false;
    bool rightMouseDownLastFrame = false;

    GLFWwindow* window;


    void Input::Init() {
        window = Backend::GetWindowPointer();

        double x, y;
        glfwGetCursorPos(window, &x, &y);
        mouseOffsetX = x;
        mouseOffsetY = y;
        mouseX = x;
        mouseY = y;
    }
    void Input::Update() {
        

        for (int i = 32; i < 349; i++) {
            // down
            if (glfwGetKey(window, i) == GLFW_PRESS)
            {
                keyDown[i] = true;
                std::cout << i << std::endl;
            }
                
            else
                keyDown[i] = false;

            // press
            if (keyDown[i] && !keyDownLastFrame[i])
                keyPressed[i] = true;
            else
                keyPressed[i] = false;
            keyDownLastFrame[i] = keyDown[i];
        }

        double x, y;
        glfwGetCursorPos(window, &x, &y);
        mouseOffsetX = x - mouseX;
        mouseOffsetY = y - mouseY;
        mouseX = x;
        mouseY = y;


        // Left mouse down/pressed
        leftMouseDown = glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT);
        if (leftMouseDown == GLFW_PRESS && !leftMouseDownLastFrame)
            leftMousePressed = true;
        else
            leftMousePressed = false;
        leftMouseDownLastFrame = leftMouseDown;

        // Right mouse down/pressed
        rightMouseDown = glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_RIGHT);
        if (rightMouseDown == GLFW_PRESS && !rightMouseDownLastFrame)
            rightMousePressed = true;
        else
            rightMousePressed = false;
        rightMouseDownLastFrame = rightMouseDown;
    }
}