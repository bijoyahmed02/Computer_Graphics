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
    //East Timor flag
    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(0.1f,0.1f);
    glVertex2f(0.9f,0.1f);
    glVertex2f(0.9f,0.7f);
    glVertex2f(0.1f,0.7f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255.0f,204.0f,0.0f);
    glVertex2f(0.1f,0.7f);
    glVertex2f(0.5f,0.4f);
    glVertex2f(0.1f,0.1f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.1f,0.7f);
    glVertex2f(0.4f,0.4f);
    glVertex2f(0.1f,0.1f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.22f,0.42f);
    glVertex2f(0.26f,0.46f);
    glVertex2f(0.25f,0.40f);
    glVertex2f(0.30f,0.375f);
    glVertex2f(0.24f,0.375f);
    glVertex2f(0.24f,0.30f);
    glVertex2f(0.21f,0.37f);
    glVertex2f(0.16f,0.35f);
    glVertex2f(0.20f,0.40f);
    glVertex2f(0.16f,0.46f);
    glVertex2f(0.22f,0.42f);
    glEnd();
    //Saint Lucia flag
    glBegin(GL_POLYGON);
    glColor3ub(0.0f,204.0f,255.0f);
    glVertex2f(-0.1f,0.1f);
    glVertex2f(-0.9f,0.1f);
    glVertex2f(-0.9f,0.7f);
    glVertex2f(-0.1f,0.7f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.69f,0.2f);
    glVertex2f(-0.5f,0.6f);
    glVertex2f(-0.31f,0.2f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.66f,0.2f);
    glVertex2f(-0.5f,0.54f);
    glVertex2f(-0.34f,0.2f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255.0f,204.0f,1.0f);
    glVertex2f(-0.69f,0.2f);
    glVertex2f(-0.5f,0.4f);
    glVertex2f(-0.31f,0.2f);
    glEnd();
     //Morocco flag
    glBegin(GL_POLYGON);
    glColor3ub(204.0f,0.0f,0.0f);
    glVertex2f(-0.1f,-0.1f);
    glVertex2f(-0.9f,-0.1f);
    glVertex2f(-0.9f,-0.7f);
    glVertex2f(-0.1f,-0.7f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(.0f,128.f,0.0f);
    glVertex2f(-0.54f,-0.34f);
    glVertex2f(-0.5f,-0.2f);
    glVertex2f(-0.46f,-0.34f);
    glVertex2f(-0.32f,-0.34f);
    glVertex2f(-0.44f,-0.43f);
    glVertex2f(-0.4f,-0.56f);
    glVertex2f(-0.5f,-0.5f);
    glVertex2f(-0.6f,-0.56f);
    glVertex2f(-0.56f,-0.43f);
    glVertex2f(-0.68f,-0.34f);
    glVertex2f(-0.54f,-0.34f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(204.0f,0.0f,0.0f);
    glVertex2f(-0.53f,-0.36f);
    glVertex2f(-0.47f,-0.36f);
    glVertex2f(-0.455f,-0.43f);
    glVertex2f(-0.5f,-0.482f);
    glVertex2f(-0.545f,-0.43f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(204.0f,0.0f,0.0f);
    glVertex2f(-0.52f,-0.34f);
    glVertex2f(-0.5f,-0.23f);
    glVertex2f(-0.48f,-0.34f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(204.0f,0.0f,0.0f);
    glVertex2f(-0.455f,-0.36f);
    glVertex2f(-0.36f,-0.36f);
    glVertex2f(-0.445f,-0.41f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(204.0f,0.0f,0.0f);
    glVertex2f(-0.45f,-0.445f);
    glVertex2f(-0.422f,-0.534f);
    glVertex2f(-0.483f,-0.49f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(204.0f,0.0f,0.0f);
    glVertex2f(-0.515f,-0.49f);
    glVertex2f(-0.582f,-0.53f);
    glVertex2f(-0.555f,-0.447f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(204.0f,0.0f,0.0f);
    glVertex2f(-0.559f,-0.41f);
    glVertex2f(-0.63f,-0.36f);
    glVertex2f(-0.545f,-0.36f);
    glEnd();
     //Saint Kitts flag
    glBegin(GL_POLYGON);
    glColor3ub(0.0f,128.0f,0.0f);
    glVertex2f(0.1f,-0.1f);
    glVertex2f(0.9f,-0.1f);
    glVertex2f(0.9f,-0.7f);
    glVertex2f(0.1f,-0.7f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(204.0f,0.0f,0.0f);
    glVertex2f(0.2f,-0.7f);
    glVertex2f(0.9f,-0.2f);
    glVertex2f(0.9f,-0.7f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(255.0f,204.0f,0.0f);
    glVertex2f(0.1f,-0.57f);
    glVertex2f(0.1f,-0.7f);
    glVertex2f(0.23f,-0.7f);
    glVertex2f(0.9f,-0.23f);
    glVertex2f(0.9f,-0.1f);
    glVertex2f(0.77f,-0.1f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.1f,-0.6f);
    glVertex2f(0.1f,-0.7f);
    glVertex2f(0.2f,-0.7f);
    glVertex2f(0.9f,-0.2f);
    glVertex2f(0.9f,-0.1f);
    glVertex2f(0.8f,-0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.26f,-0.54f);
    glVertex2f(0.3f,-0.52f);
    glVertex2f(0.28f,-0.56f);
    glVertex2f(0.31f,-0.59f);
    glVertex2f(0.27f,-0.59f);
    glVertex2f(0.25f,-0.63f);
    glVertex2f(0.25f,-0.58f);
    glVertex2f(0.2f,-0.58f);
    glVertex2f(0.24f,-0.56f);
    glVertex2f(0.23f,-0.52f);
    glVertex2f(0.26f,-0.54f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.76f,-0.18f);
    glVertex2f(0.8f,-0.16f);
    glVertex2f(0.78f,-0.2f);
    glVertex2f(0.81f,-0.23f);
    glVertex2f(0.77f,-0.23f);
    glVertex2f(0.75f,-0.27f);
    glVertex2f(0.75f,-0.22f);
    glVertex2f(0.70f,-0.22f);
    glVertex2f(0.74f,-0.20f);
    glVertex2f(0.73f,-0.16f);
    glVertex2f(0.76f,-0.18f);
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

