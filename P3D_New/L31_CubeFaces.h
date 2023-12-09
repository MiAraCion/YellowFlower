#ifndef L31_CUBEFACES_H
#define L31_CUBEFACES_H
//---------------------------------------------------------------------------
// Programming 3D to Newbies : Indiana Aiki
//---------------------------------------------------------------------------
#include <GL/gl.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L31_CubeFaces : public Scene
{
public:
   L31_CubeFaces( )
   {

   }

   void draw( )
   {
      background();
      camera();
      drawSquare();
      drawCube();
   }

private:

   void background( )
   { 
      glClearColor(0, 0, 0.2, 1);
   }   

   void camera( )
   {
      double ca;
      ca = 40 * seconds();
      glRotated(30, 1, 0, 0);
      glRotated(ca, 0, 1, 0);
   }
   
   void drawCube( )
   {
      int i;
      i = 0;
      while(i<4){
         glColor3d(0.6-0.1*i,0.0,0.0*i);
         
         glPushMatrix();
            glRotated(90*i,0,1,0);
            drawSquare();
         glPopMatrix();
         
         i++;
         
      }
      
      glColor3d(0,0.4,0.8);
      glPushMatrix();
         glRotated(-90,1,0,0);
         drawSquare();
      glPopMatrix();
      
      glColor3d(1,1,1);
      glPushMatrix();
         glRotated(90,1,0,0);
         drawSquare();
      glPopMatrix();
   }

   void drawSquare ( )
   {  
      double l,s,z;
      l=12;
      s=l/2.0;
      z=6;
      
      glBegin(GL_TRIANGLES);
         glVertex3d(-s,s,z);
         glVertex3d(-s,-s,z);
         glVertex3d(s,-s,z);
         
         glVertex3d(s,-s,z);
         glVertex3d(s,s,z);
         glVertex3d(-s,s,z);
      glEnd();
   }

};
//---------------------------------------------------------------------------
#endif
