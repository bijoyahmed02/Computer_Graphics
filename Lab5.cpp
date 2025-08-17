#include <windows.h>
#include <GL/glut.h>
void renderBitmapString(float x, float y, float z,
                        void *font, char *string)
{
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}
void display()
{
    glClearColor(204.0f, 0.0f, 255.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(-1.0f,0.0f);
    glVertex2f(1.0f,0.0f);
    glVertex2f(0.0f,-1.0f);
    glVertex2f(0.0f,1.0f);
    glEnd();

    //Somalia flag
    glBegin(GL_POLYGON);
    glColor3ub(65.0f,143.0f,222.0f);
    glVertex2f(0.1f,0.1f);
    glVertex2f(0.9f,0.1f);
    glVertex2f(0.9f,0.7f);
    glVertex2f(0.1f,0.7f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.46f,0.46f);
    glVertex2f(0.5f,0.6f);
    glVertex2f(0.54f,0.46f);
    glVertex2f(0.68f,0.46f);
    glVertex2f(0.56f,0.38f);
    glVertex2f(0.62f,0.26f);
    glVertex2f(0.5f,0.32f);
    glVertex2f(0.38f,0.26f);
    glVertex2f(0.44f,0.38f);
    glVertex2f(0.32f,0.46f);
    glVertex2f(0.46f,0.46f);
    glEnd();

    //scotland flag
    glBegin(GL_POLYGON);
    glColor3ub(0.0f,94.0f,184.0f);
    glVertex2f(-0.1f,0.1f);
    glVertex2f(-0.9f,0.1f);
    glVertex2f(-0.9f,0.7f);
    glVertex2f(-0.1f,0.7f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.18f,0.1f);
    glVertex2f(-0.1f,0.1f);
    glVertex2f(-0.1f,0.18f);
    glVertex2f(-0.82f,0.7f);
    glVertex2f(-0.9f,0.7f);
    glVertex2f(-0.9f,0.62f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.82f,0.1f);
    glVertex2f(-0.9f,0.1f);
    glVertex2f(-0.9f,0.18f);
    glVertex2f(-0.18f,0.7f);
    glVertex2f(-0.1f,0.7f);
    glVertex2f(-0.1f,0.62f);
    glEnd();

    //Sudan flag
    glBegin(GL_POLYGON);
    glColor3ub(220.0f,0.0f,0.0f);
    glVertex2f(-0.1f,-0.1f);
    glVertex2f(-0.9f,-0.1f);
    glVertex2f(-0.9f,-0.7f);
    glVertex2f(-0.1f,-0.7f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.7f,-0.3f);
    glVertex2f(-0.7f,-0.5f);
    glVertex2f(-0.1f,-0.5f);
    glVertex2f(-0.1f,-0.3f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.7f,-0.5f);
    glVertex2f(-0.1f,-0.5f);
    glVertex2f(-0.1f,-0.7f);
    glVertex2f(-0.9f,-0.7f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(0.0f,130.0f,0.0f);
    glVertex2f(-0.9f,-0.7f);
    glVertex2f(-0.6f,-0.4f);
    glVertex2f(-0.9f,-0.1f);
    glEnd();

    //Denmark flag
    glBegin(GL_POLYGON);
    glColor3ub(204.0f,0.0f,0.0f);
    glVertex2f(0.1f,-0.1f);
    glVertex2f(0.9f,-0.1f);
    glVertex2f(0.9f,-0.7f);
    glVertex2f(0.1f,-0.7f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.1f,-0.35f);
    glVertex2f(0.1f,-0.45f);
    glVertex2f(0.9f,-0.45f);
    glVertex2f(0.9f,-0.35f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.36f,-0.1f);
    glVertex2f(0.44f,-0.1f);
    glVertex2f(0.44f,-0.7f);
    glVertex2f(0.36f,-0.7f);
    glEnd();
    glFlush(); // Render now
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(720, 480);
    glutInitWindowPosition(80, 50);
    glutCreateWindow("OpenGL Setup Test");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

