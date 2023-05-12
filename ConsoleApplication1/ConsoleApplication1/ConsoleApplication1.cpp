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
    float angle = 18;
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        glBegin(GL_POLYGON);
        for (int i = 0; i <= 5; i++) {
            glVertex2f(0.5 * cos(angle * 3.14 / 180), 0.5 * sin(angle * 3.14 / 180));
            angle = angle + 72;
        }
        
       /* glVertex2f(0.5 * cos(18 * 3.14 / 180), 0.5 * sin(18 * 3.14 / 180));
        glVertex2f(0.5 * cos(306 * 3.14 / 180), 0.5 * sin(306 * 3.14 / 180));
        glVertex2f(0.5 * cos(234 * 3.14 / 180), 0.5 * sin(234 * 3.14 / 180));
        glVertex2f(0.5 * cos(162 * 3.14 / 180), 0.5 * sin(162 * 3.14 / 180));*/

        glEnd();
        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}