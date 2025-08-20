#include <iostream>
#include <glad/gl.h>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
//libs to make window, use opengl, and out put errors
using namespace std;

int main(){
    //init glfw and giving context
    glfwInit();
    
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    // making window, outputing error, and making contextCurrent window
    GLFWwindow* window = glfwCreateWindow(800, 800, "qtapms-sim", NULL, NULL);
    if (window == NULL)
    {
        cout << "failed to create glfw window";
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    // init opengl with glad, adding color, adding color, clearing color buffer bit , and swaping buffer on window
    if (!gladLoadGL(glfwGetProcAddress)) {
    cerr << "Failed to init GLAD\n";
    return -1;
    }

    glViewport(0, 0, 800, 800);

    glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(window);
    //loop for window to stay open and only close if closed
    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }
    
    // destroying Window and terminateing glfw
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
