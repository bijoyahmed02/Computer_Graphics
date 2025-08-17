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
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-1.0f,0.0f);
    glVertex2f(1.0f,0.0f);
    glVertex2f(0.0f,-1.0f);
    glVertex2f(0.0f,1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(-0.3f,0.0f);
    glVertex2f(0.2f,0.0f);
    glVertex2f(0.2f,-0.1f);
    glVertex2f(-0.3f,-0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51,51,153);
    glVertex2f(-0.3f,0.0f);
    glVertex2f(-0.3f,-0.1f);
    glVertex2f(-0.4f,-0.1f);
    glVertex2f(-0.4f,-0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51,51,153);
    glVertex2f(0.2f,0.0f);
    glVertex2f(0.3f,0.0f);
    glVertex2f(0.3f,-0.1f);
    glVertex2f(0.2f,-0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.2f,-0.1f);
    glVertex2f(-0.2f,-0.2f);
    glVertex2f(-0.3f,-0.2f);
    glVertex2f(-0.3f,-0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.3f,-0.1f);
    glVertex2f(-0.3f,-0.4f);
    glVertex2f(-0.4f,-0.4f);
    glVertex2f(-0.4f,-0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);
    glVertex2f(-0.3f,-0.2f);
    glVertex2f(-0.2f,-0.2f);
    glVertex2f(-0.2f,-0.5f);
    glVertex2f(-0.3f,-0.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.2f,-0.5f);
    glVertex2f(-0.2f,-0.6f);
    glVertex2f(-0.3f,-0.6f);
    glVertex2f(-0.3f,-0.5f);
    glEnd();

    glBegin(GL_POLYGON);
   glColor3ub(192,192,192);
    glVertex2f(-0.1f,-0.3f);
    glVertex2f(-0.1f,-0.5f);
    glVertex2f(-0.2f,-0.5f);
    glVertex2f(-0.2f,-0.3f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51,51,153);
    glVertex2f(-0.2f,-0.5f);
    glVertex2f(-0.1f,-0.5f);
    glVertex2f(-0.1f,-0.6f);
    glVertex2f(-0.2f,-0.6f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51,51,153);
    glVertex2f(-0.2f,-0.1f);
    glVertex2f(-0.2f,-0.3f);
    glVertex2f(0.1f,-0.3f);
    glVertex2f(0.1f,-0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51,51,153);
    glVertex2f(0.1f,-0.1f);
    glVertex2f(0.2f,-0.1f);
    glVertex2f(0.2f,-0.2f);
    glVertex2f(0.1f,-0.2f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.0f,-0.3f);
    glVertex2f(0.0f,-0.4f);
    glVertex2f(-0.1f,-0.4f);
    glVertex2f(-0.1f,-0.3f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.0f,-0.3f);
    glVertex2f(0.0f,-0.4f);
    glVertex2f(-0.1f,-0.4f);
    glVertex2f(-0.1f,-0.3f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);
    glVertex2f(0.0f,-0.3f);
    glVertex2f(0.0f,-0.5f);
    glVertex2f(0.1f,-0.5f);
    glVertex2f(0.1f,-0.3f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.0f,-0.5f);
    glVertex2f(0.0f,-0.6f);
    glVertex2f(0.1f,-0.6f);
    glVertex2f(0.1f,-0.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51,51,153);
    glVertex2f(0.1f,-0.5f);
    glVertex2f(0.1f,-0.6f);
    glVertex2f(0.2f,-0.6f);
    glVertex2f(0.2f,-0.5f);
    glEnd();

    glBegin(GL_POLYGON);
   glColor3ub(192,192,192);
    glVertex2f(0.1f,-0.5f);
    glVertex2f(0.2f,-0.5f);
    glVertex2f(0.2f,-0.2f);
    glVertex2f(0.1f,-0.2f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.2f,-0.1f);
    glVertex2f(0.3f,-0.1f);
    glVertex2f(0.3f,-0.4f);
    glVertex2f(0.2f,-0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);
    glVertex2f(0.3f,0.0f);
    glVertex2f(0.3f,0.2f);
    glVertex2f(-0.4f,0.2f);
    glVertex2f(-0.4f,0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,153,0);
    glVertex2f(0.2f,0.0f);
    glVertex2f(0.3f,0.0f);
    glVertex2f(0.3f,0.1f);
    glVertex2f(0.2f,0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,153,0);
    glVertex2f(-0.3f,0.0f);
    glVertex2f(-0.4f,0.0f);
    glVertex2f(-0.4f,0.1f);
    glVertex2f(-0.3f,0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);
    glVertex2f(0.2f,0.2f);
    glVertex2f(0.2f,0.3f);
    glVertex2f(-0.3f,0.3f);
    glVertex2f(-0.3f,0.2f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.1f,0.1f);
    glVertex2f(0.1f,0.2f);
    glVertex2f(-0.2f,0.2f);
    glVertex2f(-0.2f,0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,153,0);
    glVertex2f(0.1f,0.3f);
    glVertex2f(0.1f,0.4f);
    glVertex2f(-0.1f,0.4f);
    glVertex2f(-0.1f,0.3f);
    glEnd();
    //
     glBegin(GL_POLYGON);
    glColor3ub(210,105,30);
    glVertex2f(-0.1f,0.3f);
    glVertex2f(-0.1f,0.4f);
    glVertex2f(-0.2f,0.4f);
    glVertex2f(-0.2f,0.3f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.1f,0.4f);
    glVertex2f(-0.2f,0.4f);
    glVertex2f(-0.2f,0.7f);
    glVertex2f(-0.1f,0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51,51,153);
    glVertex2f(0.0f,0.4f);
    glVertex2f(-0.1f,0.4f);
    glVertex2f(-0.1f,0.6f);
    glVertex2f(0.0f,0.6f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51,51,153);
    glVertex2f(0.0f,0.4f);
    glVertex2f(0.1f,0.4f);
    glVertex2f(0.1f,0.7f);
    glVertex2f(0.0f,0.7f);
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
