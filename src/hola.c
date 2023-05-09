
// Programmer: Mihalis Tsoukalos
// Date: Wednesday 04 June 2014
//
// A simple OpenGL program that draws a triangle.

#include "GL/freeglut.h"
#include "GL/gl.h"

void drawTriangle()
{
    glColor3f(1.0, 0.0, 0.0);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

    glBegin(GL_TRIANGLES);
        glVertex3f(-0.7, 0.7, 0);
        glVertex3f(0.7, 0.7, 0);
        glVertex3f(0, -1, 0);
    glEnd();
    glFlush();
}

void SetColorBackground(GLclampf r, GLclampf g, GLclampf b, GLclampf a){
    glClearColor(r, g, b, a);
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

void SizeAndCenterWindow(int width, int height, char *title)
{
    glutInitWindowSize(width, height);

    glutInitWindowPosition(
        (glutGet(GLUT_SCREEN_WIDTH) - width) / 2,
        (glutGet(GLUT_SCREEN_HEIGHT) - height) / 2);

    glutCreateWindow(title);
}

int main(int argc, char **argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    SizeAndCenterWindow(640,480, "Hola Mundo en GLUT");
    SetColorBackground(0.0, 1.0, 0.0, 0.0);
    glutDisplayFunc(drawTriangle);
    glutMainLoop();
    return 0;
}