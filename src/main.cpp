//
// Created by leona on 8/13/2023.
//
#include <cstdio>
#include <GLFW/glfw3.h>

int main() {
    GLFWwindow *window;

    if (!glfwInit()) {
        printf("Couln't initialize GLFW\n");
        return -1;
    }

    window = glfwCreateWindow(640, 480, "Hello, World!", NULL, NULL);

    if (!window) {
        printf("Couldn't create window\n");
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    printf("Hello, World!");
    return 0;
}