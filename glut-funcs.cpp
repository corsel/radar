#include "glut-funcs.h"

PlayerObject GlutFuncs::player;

void GlutFuncs::display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	/*
  glColor4f(1.0f, 0.1f, 0.1f, 1.0f);
	glBegin(GL_QUADS);
	glVertex2f(-0.06f, -0.06f);
	glVertex2f(-0.06f, 0.06f);
	glVertex2f(0.06f, 0.06f);
	glVertex2f(0.06f, -0.06f);
	glEnd();
	*/
	GlutFuncs::player.updateTransport(Transport(Vec2(0.2f, 0.2f), 90.0f));
	GlutFuncs::player.update();
	glutSwapBuffers();
}

void GlutFuncs::idle()
{
	glutPostRedisplay();
}

void GlutFuncs::initialize(int argc, char* argv[])
{
  glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glClearColor(0.2f, 0.2f, 0.2f, 0.0f);
	glutInitWindowSize(500, 500);
	glutCreateWindow("radar");

	glutDisplayFunc(&GlutFuncs::display);
	glutIdleFunc(&GlutFuncs::idle);

  glutMainLoop();
}