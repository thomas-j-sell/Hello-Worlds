/*
 *  main.c
 *  OpenGL
 *
 * Created by Thomas J Sell on 11/16/11.
 * Copyright 2011 None. All rights reserved.
 */

#include <GLUT/glut.h>

void init (void);
void display (void);

int main (int argc, char * argv[])
{
    // init GLUT lib
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Hello OpenGL");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    
    return 0;
}

void init (void)
{
    // set background color
    glClearColor(0.0, 0.0, 0.0, 0.0);
}

void display (void)
{
    // clear screen to background color
    glClear(GL_COLOR_BUFFER_BIT);
    
    // do your drawing here...
    glColor3f(0.215,0.380,0.647);
    glBegin(GL_POLYGON);
    {
        glVertex2f(-0.5, -0.5);
        glVertex2f(-0.5, 0.5);
        glVertex2f(0.5, 0.5);
        glVertex2f(0.5, -0.5);
    }
    glEnd();
    
    glColor3f(1.0,0.784,0.380);
    {
        glBegin(GL_TRIANGLES);
        glVertex2f(-0.5, -0.5);
        glVertex2f(0, 0.5);
        glVertex2f(0.5, -0.5);
    }
    glEnd();
    
    // send to screen
    glFlush();
}