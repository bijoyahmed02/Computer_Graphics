#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
void renderBitmapString(float x, float y, float z, void *font, char *string)
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
    glClearColor(1.0f, 1.0f, 0.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,1.0f);
    glVertex2f(-1.0f,0.0f);
    glVertex2f(1.0f,0.0f);
    glVertex2f(0.0f,-1.0f);
    glVertex2f(0.0f,1.0f);
    glEnd();

    //Denmark flag
    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(0.1f,0.1f);
    glVertex2f(0.9f,0.1f);
    glVertex2f(0.9f,0.7f);
    glVertex2f(0.1f,0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.1f,0.35f);
    glVertex2f(0.9f,0.35f);
    glVertex2f(0.9f,0.45f);
    glVertex2f(0.1f,0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.36f,0.1f);
    glVertex2f(0.44f,0.1f);
    glVertex2f(0.44f,0.7f);
    glVertex2f(0.36f,0.7f);
    glEnd();

    //Sudan flag
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.1f,0.1f);
    glVertex2f(-0.9f,0.1f);
    glVertex2f(-0.9f,0.7f);
    glVertex2f(-0.1f,0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.1f,0.1f);
    glVertex2f(-0.9f,0.1f);
    glVertex2f(-0.7f,0.3f);
    glVertex2f(-0.1f,0.3f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(-0.1f,0.5f);
    glVertex2f(-0.1f,0.7f);
    glVertex2f(-0.9f,0.7f);
    glVertex2f(-0.7f,0.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,1.0f,0.0f);
    glVertex2f(-0.9f,0.1f);
    glVertex2f(-0.6f,0.4f);
    glVertex2f(-0.9f,0.7f);
    glEnd();

     //Tonga flag
    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(0.1f,-0.1f);
    glVertex2f(0.9f,-0.1f);
    glVertex2f(0.9f,-0.7f);
    glVertex2f(0.1f,-0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.1f,-0.1f);
    glVertex2f(0.4f,-0.1f);
    glVertex2f(0.4f,-0.4f);
    glVertex2f(0.1f,-0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(0.16f,-0.22f);
    glVertex2f(0.34f,-0.22f);
    glVertex2f(0.34f,-0.28f);
    glVertex2f(0.16f,-0.28f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(0.22f,-0.16f);
    glVertex2f(0.22f,-0.34f);
    glVertex2f(0.28f,-0.34f);
    glVertex2f(0.28f,-0.16f);
    glEnd();

     //Somalia flag
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.51f,1.02f);
    glVertex2f(-0.1f,-0.1f);
    glVertex2f(-0.9f,-0.1f);
    glVertex2f(-0.9f,-0.7f);
    glVertex2f(-0.1f,-0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
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


     glFlush(); // Render now
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(720, 480); // Set the window's initial width & height
    glutInitWindowPosition(80, 50);  // Set the window's initial position according to the monitor
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}

