#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>


GLfloat escala = 2;

void Desenha(void)
{
    //glClear(), limpa o buffer de cores.
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //gluOrtho2D delimita os limites do plano cartesiano
    //dentro da janela
    gluOrtho2D(-20,20,0,20);




    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();


    //Cria a casa
    glScalef(escala, escala, 1);

	glPushMatrix();
		glBegin(GL_QUADS);
			glColor3f( 1, 1, 1);
			glVertex2f(-18, 0);
			glVertex2f(-18, 4);
			glVertex2f(-12, 4);
			glVertex2f(-12, 0);
		glEnd();

		glBegin(GL_TRIANGLES);
			glColor3f( 0.255, 0, 0);
			glVertex2f(-18, 4);
			glVertex2f(-12, 4);
			glVertex2f(-15 ,6);
		glEnd();
	glPopMatrix();

    //Cria a rua
	glBegin(GL_QUADS);
		glColor3f( 0.176, 0.176, 0.176);
		glVertex2f(-8, 0);
		glVertex2f(-2, 20);
		glVertex2f( 2, 20);
		glVertex2f( 8, 0);
	glEnd();

    //Cria a árvore
	glBegin(GL_POLYGON);
		glColor3f( 0, 0.210, 0);
		glVertex2f( 14, 4);
		glVertex2f( 12, 5);
		glVertex2f( 12, 7);
		glVertex2f( 14, 8);
		glVertex2f( 16, 8);
		glVertex2f( 18, 7);
		glVertex2f( 18, 5);
		glVertex2f( 16, 4);
	glEnd();

	glBegin(GL_QUADS);
		glColor3f( 0.250, 0.100, 0.056);
		glVertex2f( 14, 0);
		glVertex2f( 14, 4);
		glVertex2f( 16, 4);
		glVertex2f( 16, 0);
	glEnd();

    //Cria o carro
	 glBegin(GL_QUADS);
		glColor3f( 0, 0, 1);
		glVertex2f(-3, 2);
		glVertex2f(-3, 4);
		glVertex2f( 3, 4);
		glVertex2f( 3, 2);
	glEnd();

    glFlush();
}


void Tecla(unsigned char tecla, GLint x, GLint y)
{
    switch(tecla)
    {
        case '+':
            escala++;
            break;
        case '-':
            escala--;
            break;
    }
    Desenha();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(320, 90);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Trabalho CG GLUT/OpenGL");
    glutKeyboardFunc(Tecla);
    glutDisplayFunc(Desenha);
    glClearColor(0,0.756,0,0);
    glutMainLoop();

    return 0;

}


