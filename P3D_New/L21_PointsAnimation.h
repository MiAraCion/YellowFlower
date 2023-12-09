#ifndef L21_POINTSANIMATION_H
#define L21_POINTSANIMATION_H
//---------------------------------------------------------------------------
// Programming 3D to Newbies : Indiana Aiki
//---------------------------------------------------------------------------
#include <GL/gl.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L21_PointsAnimation : public Scene
{
private:

double a;

public:

   L21_PointsAnimation( )
   {   

   }

   void draw( )
   {
      
      background();
      //drawPoint();
      drawAnimation();
   }

private:

   void background( )
   { 
      glClearColor(0,0,0.2,1);
   }   

   void drawAnimation( )
   {   
      double a;
      a = 90*seconds();
      glPushMatrix();
            //glRotatef(a,x,y,z)
            glRotatef(a,1,0,0);
            glRotatef(a,0,a,0);
            glRotatef(a,0,0,a);
            
         drawPoints();
      glPopMatrix();
   }   

   void drawPoints( )
   {
      glPointSize(4);
      a = 0;
      while(a<360){
         drawRotate();
         a = a + 15;
      }
   }

   void drawRotate( )
   {
      glPushMatrix();
         glRotated(a,0,0,1);
         drawPoint();
      glPopMatrix();
   }

   void drawPoint( )
   {
      glBegin(GL_POINTS);
         glVertex3d(10,0,0);
      glEnd();
   }

};
//---------------------------------------------------------------------------
#endif
