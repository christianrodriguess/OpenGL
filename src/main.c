#include <GL/freeglut.h>

void desenha(void) {
    glClear( GL_COLOR_BUFFER_BIT );

    gluOrtho2D(-3, 3, -3, 3);

    glBegin(GL_LINES);
        glVertex2f(-2, 0);
        glVertex2f(2, 0);
    glEnd();

    glBegin(GL_LINE_STRIP);
        glVertex2f(0.25, 0.25);
        glVertex2f(0.75, 0.75);
        glVertex2f(0.30, 0.45);
        glVertex2f(0, 0);
    glEnd();

    glFlush();  
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA );
    glutInitWindowSize(800, 600);
    glutCreateWindow("Minha Janela OpenGL");

    glutDisplayFunc(desenha);
    glClearColor(0, 0, 1, 0);
    glutMainLoop();

    return 0;
}