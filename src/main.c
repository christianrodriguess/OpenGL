#include <GL/freeglut.h>

void desenhaLetraC(){
    glBegin(GL_LINE_STRIP);
        glVertex2f(3, 5);
        glVertex2f(2, 5);
        glVertex2f(1, 4);
        glVertex2f(1, 2);
        glVertex2f(2, 1);
        glVertex2f(3, 1);
    glEnd();
}

void desenhaLetraH(){
    glBegin(GL_LINES);
        glVertex2f(5, 1);
        glVertex2f(5, 5);
        glVertex2f(5, 3);
        glVertex2f(7, 3);
        glVertex2f(7, 1);
        glVertex2f(7, 5);
    glEnd();
}

void desenhaLetraR(){
    glBegin(GL_LINE_STRIP);
        glVertex2f(9, 1);
        glVertex2f(9, 5);
        glVertex2f(11, 5);
        glVertex2f(11, 3);
        glVertex2f(9, 3);
        glVertex2f(11, 1);
    glEnd();
}

void desenha(void) {
    glClear( GL_COLOR_BUFFER_BIT );

    gluOrtho2D(0, 13, 0, 10);

    desenhaLetraC();
    desenhaLetraH();
    desenhaLetraR();

    glFlush();  
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode( GLUT_SINGLE | GLUT_RGBA );
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Minha Janela OpenGL");

    glutDisplayFunc(desenha);
    glClearColor(0, 0, 1, 0);
    glutMainLoop();

    return 0;
}