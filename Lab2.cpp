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

    //Qatar flag
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.1f,0.1f);
    glVertex2f(0.9f,0.1f);
    glVertex2f(0.9f,0.7f);
    glVertex2f(0.1f,0.7f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(128.0f,0.0f,0.0f);
    glVertex2f(0.9f,0.7f);
    glVertex2f(0.38f,0.7f);
    glVertex2f(0.46f,0.68f);
    glVertex2f(0.38f,0.64f);
    glVertex2f(0.46f,0.6f);
    glVertex2f(0.38f,0.56f);
    glVertex2f(0.46f,0.52f);
    glVertex2f(0.38f,0.48f);
    glVertex2f(0.46f,0.44f);
    glVertex2f(0.38f,0.4f);
    glVertex2f(0.46f,0.36f);
    glVertex2f(0.38f,0.32f);
    glVertex2f(0.46f,0.28f);
    glVertex2f(0.38f,0.24f);
    glVertex2f(0.46f,0.2f);
    glVertex2f(0.38f,0.16f);
    glVertex2f(0.46f,0.12f);
    glVertex2f(0.38f,0.1f);
    glVertex2f(0.9f,0.1f);
    glVertex2f(0.9f,0.7f);
    glEnd();

    //Wallis and Futuna flag
    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(-0.1f,0.1f);
    glVertex2f(-0.9f,0.1f);
    glVertex2f(-0.9f,0.7f);
    glVertex2f(-0.1f,0.7f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.9f,0.7f);
    glVertex2f(-0.59f,0.7f);
    glVertex2f(-0.59f,0.49f);
    glVertex2f(-0.9f,0.49f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0.0f,0.0f,128.0f);
    glVertex2f(-0.9f,0.7f);
    glVertex2f(-0.8f,0.7f);
    glVertex2f(-0.8f,0.5f);
    glVertex2f(-0.9f,0.5f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(-0.7f,0.7f);
    glVertex2f(-0.6f,0.7f);
    glVertex2f(-0.6f,0.5f);
    glVertex2f(-0.7f,0.5f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.46f,0.52f);
    glVertex2f(-0.26f,0.52f);
    glVertex2f(-0.26f,0.32f);
    glVertex2f(-0.46f,0.32f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(-0.28f,0.32f);
    glVertex2f(-0.46f,0.5f);
    glVertex2f(-0.46f,0.52f);
    glVertex2f(-0.44f,0.52f);
    glVertex2f(-0.26f,0.34f);
    glVertex2f(-0.26f,0.32f);
    glVertex2f(-0.28f,0.32f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(-0.46f,0.34f);
    glVertex2f(-0.28f,0.52f);
    glVertex2f(-0.26f,0.52f);
    glVertex2f(-0.26f,0.50f);
    glVertex2f(-0.44f,0.32f);
    glVertex2f(-0.46f,0.32f);
    glVertex2f(-0.46f,0.34f);
    glEnd();

    //Saint Vincent and the Grenadines flag
    glBegin(GL_POLYGON);
    glColor3ub(255.0f,204.0f,0.0f);
    glVertex2f(-0.1f,-0.1f);
    glVertex2f(-0.9f,-0.1f);
    glVertex2f(-0.9f,-0.7f);
    glVertex2f(-0.1f,-0.7f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0.0f,51.0f,102.0f);
    glVertex2f(-0.9f,-0.1f);
    glVertex2f(-0.7f,-0.1f);
    glVertex2f(-0.7f,-0.7f);
    glVertex2f(-0.9f,-0.7f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0.0f,128.0f,0.0f);
    glVertex2f(-0.1f,-0.1f);
    glVertex2f(-0.1f,-0.7f);
    glVertex2f(-0.3f,-0.7f);
    glVertex2f(-0.3f,-0.1f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0.0f,128.0f,0.0f);
    glVertex2f(-0.58f,-0.26f);
    glVertex2f(-0.52f,-0.35f);
    glVertex2f(-0.58f,-0.44f);
    glVertex2f(-0.64f,-0.35f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0.0f,128.0f,0.0f);
    glVertex2f(-0.42f,-0.26f);
    glVertex2f(-0.36f,-0.35f);
    glVertex2f(-0.42f,-0.44f);
    glVertex2f(-0.48f,-0.35f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0.0f,128.0f,0.0f);
    glVertex2f(-0.5f,-0.38f);
    glVertex2f(-0.44f,-0.47f);
    glVertex2f(-0.5f,-0.56f);
    glVertex2f(-0.56f,-0.47f);
    glEnd();

    //South African flag
    glBegin(GL_POLYGON);
    glColor3ub(0.0f,128.0f,0.0f);
    glVertex2f(0.1f,-0.1f);
    glVertex2f(0.9f,-0.1f);
    glVertex2f(0.9f,-0.7f);
    glVertex2f(0.1f,-0.7f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255.0f,204.0f,0.0f);
    glVertex2f(0.1f,-0.17f);
    glVertex2f(0.44f,-0.4f);
    glVertex2f(0.1f,-0.63f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.1f,-0.2f);
    glVertex2f(0.4f,-0.4f);
    glVertex2f(0.1f,-0.6f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.16f,-0.1f);
    glVertex2f(0.6f,-0.33f);
    glVertex2f(0.9f,-0.33f);
    glVertex2f(0.9f,-0.1f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(0.2f,-0.1f);
    glVertex2f(0.6f,-0.3f);
    glVertex2f(0.9f,-0.3f);
    glVertex2f(0.9f,-0.1f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.16f,-0.7f);
    glVertex2f(0.6f,-0.47f);
    glVertex2f(0.9f,-0.47f);
    glVertex2f(0.9f,-0.7f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0.0f,0.0f,128.0f);
    glVertex2f(0.2f,-0.7f);
    glVertex2f(0.6f,-0.5f);
    glVertex2f(0.9f,-0.5f);
    glVertex2f(0.9f,-0.7f);
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

