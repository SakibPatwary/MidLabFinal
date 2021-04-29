#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

#define PI 3.14159265358979323846

void first_object_GREEN()
{
    glBegin(GL_QUADS);
    glColor3ub(56, 168, 50);
    glVertex2f(-0.6f,0.9f);///TOP LEFT
    glVertex2f(0.8f,0.9f); ///TOP RIGHT
    glVertex2f(0.6f,-0.6f); /// BOTTOM RIGHT
    glVertex2f(-0.8f,-0.6f); /// BOTTOM LEFT
    glEnd();
}

void second_object_YELLOW()
{
    glBegin(GL_QUADS);
    glColor3ub(212, 212, 15);
    glVertex2f(-0.8f,-0.6f);///TOP LEFT
    glVertex2f(0.6f,-0.6f); ///TOP RIGHT
    glVertex2f(0.6f,-0.4f); /// BOTTOM RIGHT
    glVertex2f(-0.8f,-0.4f); /// BOTTOM LEFT
    glEnd();
}


void third_object_circle_BLUE()
{
    int is;
    GLfloat xs=0.0f;
	GLfloat ys=0.15f;
	GLfloat radiuss =.3f;
    int triangleAmounts = 100;
    GLfloat twicePis = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(12, 164, 201);
    glVertex2f(xs, ys);
    for(is = 0; is <= triangleAmounts; is++)
    {
        glVertex2f(xs+(radiuss*cos(is*twicePis/triangleAmounts)), ys+(radiuss*sin(is*twicePis/triangleAmounts)));
    }
    glEnd();
}

void fourth_object_RED()
{
    glBegin(GL_QUADS);
    glColor3ub(201, 12, 12);
    glVertex2f(-0.2f,0.8f);///TOP LEFT
    glVertex2f(0.2f,0.8f); ///TOP RIGHT
    glVertex2f(0.3f,0.47f); /// BOTTOM RIGHT
    glVertex2f(-0.3f,0.47f); /// BOTTOM LEFT
    glEnd();
}

void fifth_object_line_RED()
{
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(201, 12, 12);
    glVertex2f(0.8f,0.9f);
    glVertex2f(0.8f,-0.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(201, 12, 12);
    glVertex2f(0.8f,-0.6f);
    glVertex2f(0.6f,-0.6f);
    glEnd();
}

void display()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    first_object_GREEN();
    second_object_YELLOW();
    third_object_circle_BLUE();
    fourth_object_RED();
    fifth_object_line_RED();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(640, 640);
	glutCreateWindow("Midterm Assessment");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
