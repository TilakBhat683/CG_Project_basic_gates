#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<string.h>
#include<glut.h>
#include<gl/GLU.h>
#include<math.h>
int c = 0;
int c1 = 0;
void display();
void button();
void orGate();
void AndGate();
void NotGate();
void front();


void displayText(float x, float y, float R1, float G1, float B1, const char* string) {
    int j = strlen(string);
    glColor3f(R1, G1, B1);
    glRasterPos2f(x, y);
    for (int i = 0; i < j; i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
    glFlush();
}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0, 0, 0, 0.0);
    glLoadIdentity();

    if (c == 0)
    {
        front();

    }
    if (c1 == 1)
    {

        button();
        if (c == 2)
        {

            AndGate();
        }
        if (c == 3)
        {

            orGate();
        }
        if (c == 1)
        {

            NotGate();
        }
    }
    glFlush();


}
void front()
{
    displayText(10, 19, 0, 0, 1, "SDM INSTITUTE OF TECHNOLOGY");
    displayText(8, 17, 0, 1, 0.1, "DEPARTMENT OF COMPUTER SEIENCE AND ENGINEERING");
    displayText(12, 16, 1, 0.5, 0, "MINI PROJECT ON");
    displayText(10, 15, 0, 1, 1, "*DEMONSTRATION OF BASIC GATES*");
    displayText(3, 10, 1, 0, 1, "SUBMITED BY");
    displayText(3, 9, 1, 0, 1, "TILAK BHAT");
    displayText(3, 8, 1, 0, 1, "(4SU18CS103)");
    displayText(3, 7, 1, 0, 1, "T N PRASANNA");
    displayText(3, 6, 1, 0, 1, "(4SU18CS100)");
    displayText(3, 5, 1, 0, 1, "VINAY H");
    displayText(3, 4, 1, 0, 1, "(4SU18CS109)");
    displayText(20, 9, 1, 0, 1, "GUIDED BY");
    displayText(20, 8, 1, 0, 1, "Mr RAGHAVENDRA PATIL G E");
    displayText(20, 7, 1, 0, 1, "Asst. Prof Dept of CSE");
    displayText(13, 3, 1, 0, 1, "[Press Enter to Insert]");

    glFlush();
}
void mouse(int button, int state, int x, int y)//change this to mimic a button function to change the screen (main menu/restart sorting/etc...)
{
    y = 700 - y;

    if ((button == GLUT_LEFT_BUTTON) && (state == GLUT_DOWN) && (x <= 310) && (x >= 150) && (y <= 660) && (y >= 615))
    {

        c = 1;
        display();

    }
    if ((button == GLUT_LEFT_BUTTON) && (state == GLUT_DOWN) && (x <= 760) && (x >= 620) && (y <= 660) && (y >= 615))
    {

        c = 2;
        display();

    }
    if ((button == GLUT_LEFT_BUTTON) && (state == GLUT_DOWN) && (x <= 1330) && (x >= 1180) && (y <= 660) && (y >= 615))
    {

        c = 3;
        display();
    }
}
void button()
{
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(3, 18);
    glVertex2f(3, 19);
    glVertex2f(6, 19);
    glVertex2f(6, 18);
    glEnd();
    displayText(3.5, 18.3, 0, 0, 1, "NOT");
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(12, 18);
    glVertex2f(12, 19);
    glVertex2f(15, 19);
    glVertex2f(15, 18);
    glEnd();
    displayText(12.6, 18.3, 0, 0, 1, "AND");
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(23, 18);
    glVertex2f(23, 19);
    glVertex2f(26, 19);
    glVertex2f(26, 18);
    glEnd();
    displayText(23.6, 18.3, 0, 0, 1, "OR");

}
void orGate()
{


    glColor3f(1.0, 0.60, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(20, 14);
    glVertex2f(20, 4);
    glVertex2f(26, 4);
    glVertex2f(26, 14);
    glEnd();

    glEnd();


    int i;
    int triangleAmount = 20; //# of triangles used to draw circle
    float PI = 3.148;
    float radius = 2.0;
    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(8, 10); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            8 + (radius * cos(i * twicePi / triangleAmount)),
            10 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glColor3f(0.0, 0.0, 0.0);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(6, 10); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            6 + (radius * cos(i * twicePi / triangleAmount)),
            10 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    glColor3f(0.0, 0.60, 0.0);
    glBegin(GL_LINES);

    glVertex2f(3, 11);
    glVertex2f(7.7, 11);
    glEnd();

    glBegin(GL_LINES);

    glVertex2f(3, 9);
    glVertex2f(7.7, 9);
    glEnd();

    glColor3f(1.0, 0.60, 0.0);
    glBegin(GL_LINES);
    glVertex2f(10, 10);
    glVertex2f(13, 10);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(20, 14);
    glVertex2f(20, 4);
    glVertex2f(26, 4);
    glVertex2f(26, 14);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);

    glBegin(GL_LINES);
    glVertex2f(20, 13);
    glVertex2f(26, 13);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(20, 12);
    glVertex2f(26, 12);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(20, 10);
    glVertex2f(26, 10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(22, 4);
    glVertex2f(22, 13);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(20, 14);
    glVertex2f(20, 4);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(20, 8);
    glVertex2f(26, 8);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(24, 4);
    glVertex2f(24, 14);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(20, 14);
    glVertex2f(26, 14);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(20, 6);
    glVertex2f(26, 6);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(20, 4);
    glVertex2f(26, 4);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(26, 4);
    glVertex2f(26, 14);
    glEnd();


    displayText(3, 11.2, 0, 0, 1, "Input   A");
    displayText(3, 9.2, 0, 0, 1, "Input   B");
    displayText(11, 10.2, 0, 0, 1, "Output   C");
    displayText(20, 13.2, 0, 0, 1, "             Input                 Output");
    displayText(20, 12.2, 0, 0, 1, "      A               B            C");
    displayText(20, 11, 0, 0, 1, "      0               0              0");
    displayText(20, 9, 0, 0, 1, "      0               1              1");
    displayText(20, 7, 0, 0, 1, "      1               0              1");
    displayText(20, 5, 0, 0, 1, "      1               1              1");
    displayText(3, 16, 0, 0, 1, "Circuit Diagram of OR gate");
    displayText(20, 16, 0, 0, 1, "Truth Table");

}
void AndGate()
{
    glColor3f(0.0, 0.60, 0.0);
    glBegin(GL_LINES);

    glVertex2f(3, 11);
    glVertex2f(6, 11);
    glEnd();

    glBegin(GL_LINES);

    glVertex2f(3, 9);
    glVertex2f(6, 9);
    glEnd();

    glColor3f(1.0, 0.60, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(6, 12);
    glVertex2f(6, 8);
    glVertex2f(8, 8);
    glVertex2f(8, 12);

    glEnd();


    int i;
    int triangleAmount = 20; //# of triangles used to draw circle
    float PI = 3.148;
    float radius = 2.0;
    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(8, 10); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            8 + (radius * cos(i * twicePi / triangleAmount)),
            10 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    glBegin(GL_LINES);
    glVertex2f(10, 10);
    glVertex2f(13, 10);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(20, 14);
    glVertex2f(20, 4);
    glVertex2f(26, 4);
    glVertex2f(26, 14);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);

    glBegin(GL_LINES);
    glVertex2f(20, 13);
    glVertex2f(26, 13);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(20, 12);
    glVertex2f(26, 12);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(20, 10);
    glVertex2f(26, 10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(22, 4);
    glVertex2f(22, 13);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(20, 14);
    glVertex2f(20, 4);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(20, 8);
    glVertex2f(26, 8);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(24, 4);
    glVertex2f(24, 14);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(20, 14);
    glVertex2f(26, 14);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(20, 6);
    glVertex2f(26, 6);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(20, 4);
    glVertex2f(26, 4);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(26, 4);
    glVertex2f(26, 14);
    glEnd();


    displayText(3, 11.2, 0, 0, 1, "Input   A");
    displayText(3, 9.2, 0, 0, 1, "Input   B");
    displayText(11, 10.2, 0, 0, 1, "Output   C");
    displayText(20, 13.2, 0, 0, 1, "             Input                 Output");
    displayText(20, 12.2, 0, 0, 1, "      A               B            C");
    displayText(20, 11, 0, 0, 1, "      0               0              0");
    displayText(20, 9, 0, 0, 1, "      0               1              0");
    displayText(20, 7, 0, 0, 1, "      1               0              0");
    displayText(20, 5, 0, 0, 1, "      1               1              1");
    displayText(3, 16, 0, 0, 1, "Circuit Diagram of AND gate");
    displayText(20, 16, 0, 0, 1, "Truth Table");
    glFlush();


}
void NotGate()
{
    glColor3f(0.0, 0.60, 0.0);
    glBegin(GL_LINES);

    glVertex2f(3, 10);
    glVertex2f(6, 10);
    glEnd();

    glColor3f(1.0, 0.60, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(6, 12);
    glVertex2f(6, 8);
    glVertex2f(9, 10);

    glEnd();


    int i;
    int triangleAmount = 20; //# of triangles used to draw circle
    float PI = 3.148;
    float radius = 0.5;
    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(9.5, 10); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            9.5 + (radius * cos(i * twicePi / triangleAmount)),
            10 + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    glBegin(GL_LINES);
    glVertex2f(10, 10);
    glVertex2f(13, 10);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(20, 14);
    glVertex2f(20, 8);
    glVertex2f(24, 8);
    glVertex2f(24, 14);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);

    glBegin(GL_LINES);
    glVertex2f(20, 13);
    glVertex2f(24, 13);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(20, 12);
    glVertex2f(24, 12);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(20, 10);
    glVertex2f(24, 10);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(22, 8);
    glVertex2f(22, 14);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(20, 14);
    glVertex2f(20, 8);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(20, 8);
    glVertex2f(24, 8);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(24, 8);
    glVertex2f(24, 14);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(20, 14);
    glVertex2f(24, 14);
    glEnd();


    displayText(3, 10.2, 0, 0, 1, "Input   A");
    displayText(11, 10.2, 0, 0, 1, "Output   B");
    displayText(20, 13.2, 0, 0, 1, "    Input         Output");
    displayText(20, 12.2, 0, 0, 1, "      A               B");
    displayText(20, 11, 0, 0, 1, "      0               1");
    displayText(20, 9, 0, 0, 1, "      1               0");
    displayText(3, 16, 0, 0, 1, "Circuit Diagram of NOT gate");
    displayText(20, 16, 0, 0, 1, "Truth Table");
    glFlush();
}
void keys(unsigned char key, int x, int y) {
    if (key == 13)
    {
        c = 5;
        c1 = 1;
        display();
    }
    if (key == 27)
    {
        c = 0;
        c1 = 0;
        display();
    }
}
void reshape(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 30, 0, 20);
    glMatrixMode(GL_MODELVIEW);

}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(1600, 900);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Display");
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutKeyboardFunc(keys);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}