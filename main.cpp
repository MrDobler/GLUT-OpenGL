#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>

//Variáveis que controlam a animação do carro.
GLfloat escala = 1.0f;
GLfloat move = 0.0f;

void desenha(void)
{
    //glClear(), limpa o buffer de cores.
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    /*
    *gluOrtho2D delimita os limites do plano cartesiano
    *dentro da janela
    */
    gluOrtho2D(-20,20,0,20);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();


    //Cria a casa
	glBegin(GL_QUADS);
		glColor3f( 0.6, 1, 1);
		glVertex2f(-18, 0);
		glVertex2f(-18, 4);
		glVertex2f(-12, 4);
		glVertex2f(-12, 0);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f( 0, 0, 0);
		glVertex2f(-18, 4);
		glVertex2f(-12, 4);
		glVertex2f(-15 ,6);
	glEnd();

	//Cria a janela da casa
	glBegin(GL_LINES);
		glColor3f( 0, 0, 0);
		glVertex2f(-17, 1.5);
		glVertex2f(-17, 3);
	glEnd();

	glBegin(GL_LINES);
		glColor3f( 0, 0, 0);
		glVertex2f(-17, 3);
		glVertex2f(-15, 3);
	glEnd();

	glBegin(GL_LINES);
		glColor3f( 0, 0, 0);
		glVertex2f(-15, 3);
		glVertex2f(-15, 1.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f( 0, 0, 0);
		glVertex2f(-15, 1.5);
		glVertex2f(-17, 1.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f( 0, 0, 0);
		glVertex2f(-17, 2.2);
		glVertex2f(-15, 2.2);
	glEnd();

	glBegin(GL_LINES);
		glColor3f( 0, 0, 0);
		glVertex2f(-16, 1.5);
		glVertex2f(-16, 3);
	glEnd();

	//Cria a Porta da Casa
	glBegin(GL_QUADS);
	glColor3f( 0.250, 0.100, 0.056);
		glVertex2f(-14, 0);
		glVertex2f(-14, 2);
		glVertex2f(-12.5, 2);
		glVertex2f(-12.5, 0);
	glEnd();

    //Cria a rua
	glBegin(GL_QUADS);
		glColor3f( 0.176, 0.176, 0.176);
		glVertex2f(-8, 0);
		glVertex2f(-2, 20);
		glVertex2f( 2, 20);
		glVertex2f( 8, 0);
	glEnd();

	//Cria faixa esquerda da rua
	glBegin(GL_QUADS);
		glColor3f( 1, 1, 1);
		glVertex2f(-8.5, 0);
		glVertex2f(-2.5, 20);
		glVertex2f( -2, 20);
		glVertex2f( -8, 0);
	glEnd();

	//Cria faixa a direita da rua
	glBegin(GL_QUADS);
		glColor3f( 1, 1, 1);
		glVertex2f( 8.5, 0);
		glVertex2f( 2.5, 20);
		glVertex2f(  2, 20);
		glVertex2f(  8, 0);
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

	//Cria o apartamento
	glBegin(GL_QUADS);
			glColor3f(0.216, 0.216, 0.191);
			glVertex2f(-12, 12);
			glVertex2f(-7, 12);
			glVertex2f(-7, 19);
			glVertex2f(-12, 19);
		glEnd();

	//Cria a Porta do apartamento
	glBegin(GL_QUADS);
		glColor3f( 1, 1, 1);
		glVertex2f(-10, 12);
		glVertex2f(-10, 13.5);
		glVertex2f(-9, 13.5);
		glVertex2f(-9, 12);
	glEnd();

	//Cria uma janela do apartamento
	glBegin(GL_LINES);
		glColor3f( 1, 1, 1);
		glVertex2f(-11, 17.5);
		glVertex2f(-11, 18.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-11, 18.5);
		glVertex2f(-10, 18.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-10, 18.5);
		glVertex2f(-10, 17.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-10, 17.5);
		glVertex2f(-11, 17.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-10.5, 17.5);
		glVertex2f(-10.5, 18.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-11, 18);
		glVertex2f(-10, 18);
	glEnd();

	//Cria outra janela do apartamento
	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-11, 16);
		glVertex2f(-11, 17);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-11, 17);
		glVertex2f(-10, 17);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-10, 17);
		glVertex2f(-10, 16);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-10, 16);
		glVertex2f(-11, 16);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-10.5, 16);
		glVertex2f(-10.5, 17);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-11, 16.5);
		glVertex2f(-10, 16.5);
	glEnd();

	//Cria mais outra janela do apartamento
	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-11, 14.5);
		glVertex2f(-11, 15.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-11, 15.5);
		glVertex2f(-10, 15.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-10, 15.5);
		glVertex2f(-10, 14.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-10, 14.5);
		glVertex2f(-11, 14.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-10.5, 14.5);
		glVertex2f(-10.5, 15.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-11, 15);
		glVertex2f(-10, 15);
	glEnd();

	//Cria uma janela do apartamento
	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-9, 17.5);
		glVertex2f(-9, 18.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-9, 18.5);
		glVertex2f(-8, 18.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-8, 18.5);
		glVertex2f(-8, 17.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-8, 17.5);
		glVertex2f(-9, 17.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-8.5, 17.5);
		glVertex2f(-8.5, 18.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-9, 18);
		glVertex2f(-8, 18);
	glEnd();

	//Cria outra janela do apartamento
	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-9, 16);
		glVertex2f(-9, 17);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-9, 17);
		glVertex2f(-8, 17);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-8, 17);
		glVertex2f(-8, 16);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-8, 16);
		glVertex2f(-9, 16);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-8.5, 16);
		glVertex2f(-8.5, 17);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-9, 16.5);
		glVertex2f(-8, 16.5);
	glEnd();

	//Cria mais outra janela do apartamento
	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-9, 14.5);
		glVertex2f(-9, 15.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-9, 15.5);
		glVertex2f(-8, 15.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-8, 15.5);
		glVertex2f(-8, 14.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-8, 14.5);
		glVertex2f(-9, 14.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-8.5, 14.5);
		glVertex2f(-8.5, 15.5);
	glEnd();

	glBegin(GL_LINES);
		glColor3f(1, 1, 1);
		glVertex2f(-9, 15);
		glVertex2f(-8, 15);
	glEnd();

	//Cria outra árvore
	glBegin(GL_POLYGON);
		glColor3f(0, 0.210, 0);
		glVertex2f(-16, 13);
		glVertex2f(-16.4, 13.4);
		glVertex2f(-16.4, 13.8);
		glVertex2f(-16, 14.2);
		glVertex2f(-15.5, 14.2);
		glVertex2f(-15, 13.8);
		glVertex2f(-15, 13.4);
		glVertex2f(-15.5, 13);
	glEnd();

	glBegin(GL_QUADS);
			glColor3f( 0.250, 0.100, 0.056);
			glVertex2f(-16, 12);
			glVertex2f(-16, 13);
			glVertex2f(-15.5, 13);
			glVertex2f(-15.5, 12);
	glEnd();


	/*
	 *	glPushMatrix()/glPopMatrix transforma vários objetos
	 *	em um único bloco que pode ser manipulado.
	 *
	 */

	glPushMatrix();
		glTranslatef(0, move, 0.0f);
		glScalef(escala, escala, 0.0f);

		//Cria a lataria do carro
		glBegin(GL_QUADS);
			glColor3f(0.137255, 0.137255, 0.556863);
			glVertex2f(-3, 2);
			glVertex2f(-3, 4);
			glVertex2f( 3, 4);
			glVertex2f( 3, 2);
		glEnd();

		//Cria o teto do carro
		glBegin(GL_QUADS);
			glColor3f(0.137255, 0.137255, 0.556863);
			glVertex2f(-2.5, 4);
			glVertex2f(-1.5, 5);
			glVertex2f( 1.5, 5);
			glVertex2f( 2.5, 4);
		glEnd();

		//Cria o vidro traseiro
		glBegin(GL_QUADS);
			glColor3f(0.560784, 0.560784, 0.737255);
			glVertex2f( -2, 4);
			glVertex2f(-1.5, 4.7);
			glVertex2f( 1.5, 4.7);
			glVertex2f( 2, 4);
		glEnd();

		//Cria as rodas do carro
		glBegin(GL_QUADS);
			glColor3f( 0, 0, 0);
			glVertex2f(-2.5, 1.5);
			glVertex2f(-2.5, 2);
			glVertex2f(-1.5, 2);
			glVertex2f(-1.5, 1.5);
		glEnd();

		glBegin(GL_QUADS);
			glColor3f( 0, 0, 0);
			glVertex2f( 1.5, 1.5);
			glVertex2f( 1.5, 2);
			glVertex2f( 2.5, 2);
			glVertex2f( 2.5, 1.5);
		glEnd();

		//Cria lanternas do carro
		glBegin(GL_QUADS);
			glColor3f( 1, 0, 0);
			glVertex2f( -2.5, 3);
			glVertex2f( -2.5, 3.5);
			glVertex2f( -1, 3.5);
			glVertex2f( -1, 3);
		glEnd();

		glBegin(GL_QUADS);
			glColor3f( 1, 0, 0);
			glVertex2f( 1, 3);
			glVertex2f( 1, 3.5);
			glVertex2f( 2.5, 3.5);
			glVertex2f( 2.5, 3);
		glEnd();

		//Cria a placa do carro
		glBegin(GL_QUADS);
			glColor3f( 0.658824, 0.658824, 0.658824);
			glVertex2f( -0.5, 2.5);
			glVertex2f( -0.5, 2.8);
			glVertex2f( 0.5, 2.8);
			glVertex2f( 0.5, 2.5);
		glEnd();
	glPopMatrix();

	//Não excluir isto
	glutSwapBuffers();
    glFlush();
}

//Função que faz a interação entre o programa e o usuario via teclado.
void teclado(unsigned char tecla, GLint x, GLint y)
{
	switch(tecla)
    {
        case '+':
            escala = escala + 0.1;
            move = move -4;
            break;
        case '-':
            escala = escala - 0.1;
        	move = move + 4;
            break;
    }
    desenha();
}


int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(320, 90);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Trabalho CG GLUT/OpenGL");
    glutKeyboardFunc(teclado);
    glutDisplayFunc(desenha);
    glClearColor(0.137255,0.556863,0.137255,0);
    glutMainLoop();

    return 0;

}


