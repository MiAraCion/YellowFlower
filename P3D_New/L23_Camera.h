#ifndef L23_CAMERA_H
#define L23_CAMERA_H
//---------------------------------------------------------------------------
// Programming 3D to Newbies : Indiana Aiki
//---------------------------------------------------------------------------
#include <GL/gl.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L23_Camera : public Scene
{
private:

   double aCam;
   double aCub;
   
public:
   L23_Camera( )
   {   
      
   }

   void draw( )
   {
      background();  
      drawAnimation();
   }

   void click( )
   {
      aCam = aCam + 2;
      if(aCam > 60)
      {
         aCam = 60;
      }
   }

private:    

   void background( )
   { 
      glClearColor(0,0,0.2,1);
   }   

   void camera( )
   {
      glRotated(aCam,1,0,0);
   }    

   void drawAnimation( )
   {   
         double a; 
         a = 30*seconds();
         glPushMatrix();
            glRotated(a,0,1,0);
            drawCube();
         glPopMatrix();
   }   

   void drawCube( )
   {   
      glLineWidth(2);
      glColor3d(0.6,0.6,1.0);
      aCub = 0;
      while(aCub<360)
      {
         drawRotate();
         aCub = aCub + 90;
      }
   }

   void drawRotate( )
   {
      glPushMatrix();
         glRotated(aCub,0,1,0);
         drawSquare();
      glPopMatrix();
   }

   void drawSquare( )
   {
      double l,s;
      l=16;
      s=l/2.0;
      glBegin(GL_LINES);
         glVertex3d(-s,s,s); glVertex3d(-s,-s,s);
         glVertex3d(-s,-s,s); glVertex3d(s,-s,s);
         glVertex3d(s,-s,s); glVertex3d(s,s,s);
         glVertex3d(s,s,s); glVertex3d(-s,s,s);
      glEnd();
   }

};
//---------------------------------------------------------------------------
#endif
