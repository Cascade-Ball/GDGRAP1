#include <GLFW/glfw3.h>
#include<math.h>

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(600, 600, "Derek Colbee Uy", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        glBegin(GL_POLYGON);
        glVertex2f(0.f, 0.1f * 5); 
        glVertex2f(0.0951f * 5, 0.0309f * 5);
        glVertex2f(0.0588f * 5, -0.0809f * 5);
        glVertex2f(-0.0588f * 5, -0.0809f * 5);
        glVertex2f(-0.0951f * 5, 0.0309f * 5);

       /* glBegin(GL_TRIANGLES); 
        glVertex2f(-0.225f, 0.f);
        glVertex2f(0.125f, -0.25f);
        glVertex2f(0.f, 0.f);

        glBegin(GL_TRIANGLES);
        glVertex2f(0.225f, 0.f);
        glVertex2f(0.125f, -0.25f);
        glVertex2f(0.f, 0.f);*/

        glEnd();
        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}