#ifndef MAIN_GLUT_H
#define MAIN_GLUT_H
//---------------------------------------------------------------------------
// Programming 3D to Newbies : Indiana Aiki
//---------------------------------------------------------------------------
#include <GL/gl.h>
#include <GL/glut.h>
//----------------------------------------------------
void iniGL ( )
{
	glClearColor( 0.0f, 0.0f, 0.2f, 1.0f );
	glClearDepth( 1.0f );
	glEnable    ( GL_DEPTH_TEST );
	glDepthFunc ( GL_LEQUAL );
	glHint      ( GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST );
	glShadeModel( GL_SMOOTH );
	glEnable    ( GL_DITHER );
	glFrontFace ( GL_CCW );
	glCullFace  ( GL_BACK );
	glDisable   ( GL_CULL_FACE );
	glLineWidth ( 2 );
	glColor3f   ( 0.8, 0.8, 1 );
	
	//scene.iniGL();
}

void display( )
{
	glClear       ( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
	glMatrixMode  ( GL_MODELVIEW );
	glLoadIdentity( );
	glTranslatef  ( 0.0f, 0.0f,-40.0f );
	
	scene.draw( );
	
	glutSwapBuffers( );
}

void mouse( int button, int state, int x, int y )
{
	if( (button == GLUT_LEFT_BUTTON) && (state == GLUT_DOWN) )
		scene.click( );
}

void reshape ( int width, int height )
{
	if ( height == 0 || height == 1 )
		return;
	
	float aspect = (float)width  / height;
	
	glViewport     ( 0, 0, width, height );
	
	glMatrixMode   ( GL_PROJECTION );
	glLoadIdentity ( );
	
	gluPerspective ( 45, aspect, 0.1f, 100.0f );
	
	glMatrixMode   ( GL_MODELVIEW );
	glLoadIdentity ( );
}

void timer(int val)
{
	display      ( );
	glutTimerFunc( 12, timer, 1 );
}

int main_WinPosX   = 820;
int main_WinPosY   = 100;
int main_WinWidth  = 450;
int main_WinHeight = 350;

void iniGlut ( )
{
   glutInitDisplayMode   ( GLUT_RGBA | GLUT_DOUBLE | 
                           GLUT_ALPHA | GLUT_DEPTH );
   glutInitWindowSize    ( main_WinWidth, main_WinHeight );
   glutInitWindowPosition( main_WinPosX , main_WinPosY   );
	
   glutCreateWindow      ( "Programación C++ Michael Aragon");
	glutDisplayFunc       ( display );
	glutReshapeFunc       ( reshape );
	
	//glutTimerFunc         ( 12, timer, 1 );
	//glutIdleFunc          ( NULL  );
   glutIdleFunc          ( display  );
	
	glutMouseFunc         ( mouse );
}

int main_Glut ( )
{
   int argc=0; char** argv;

   glutInit( &argc, argv );

   iniGlut     ( );
   iniGL       ( );
   glutMainLoop( );

   return 0;
}

//---------------------------------------------------------------
#endif
