#ifndef L02_ENVIRONMENT_H
#define L02_ENVIRONMENT_H
//---------------------------------------------------------------------------
// Programming 3D to Newbies : Indiana Aiki
//---------------------------------------------------------------------------
#include <GL/gl.h>
#include "Scene.h"
//---------------------------------------------------------------------------
class L02_Environment : public Scene
{
public:

   
// Ginda = 1
// rojo =2
// marron = 3
// amarillo = 4
// rosa oscuro = 5
// rosa claro = 6
// azul oscuro = 7
// azul medio = 8
// celeste = 9
// negro = 10
// blanco = 11
//por defecto = 12
   
 //MARIO
 //y = 28
 //x = 16   
 
 //HONGO
 //x = 16
 //y = 15
 
 //Pacman
 //x = 14
 //y = 15
 
 //FlappyBird
 //x = 17
 //y = 12
 
 //MegaMan8
 //x = 31
 //y = 24
 
 //zelda
 //x = 38
 //y = 32
 
  int Zelda[1216] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                     0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,10,10,10,0,0,0,0,0,0,0,0,0,10,10,10,10,10,0,0,0,0,0,
                     0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,19,20,20,19,10,0,0,0,0,0,0,0,10,19,20,20,19,10,0,0,0,0,0,
                     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,21,20,19,10,0,0,0,0,0,0,10,16,20,21,21,10,0,0,0,0,0,0,
                     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,18,18,16,10,0,0,0,0,0,10,18,16,18,18,10,18,10,0,0,0,0,0,
                     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,18,16,16,10,0,0,0,10,18,18,16,16,10,18,11,18,10,0,0,0,0,
                     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,16,16,16,16,16,16,16,16,16,16,16,16,18,19,19,19,18,10,0,0,0,
                     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,15,15,15,15,15,15,15,15,15,10,18,19,19,19,19,19,18,10,0,0,
                     0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,0,0,10,15,14,14,14,14,14,14,15,10,19,19,19,19,19,19,19,11,10,0,
                     0,0,0,0,0,0,0,0,0,0,0,0,0,10,16,18,10,0,10,20,20,20,4,17,4,20,10,18,19,19,19,19,19,19,19,18,10,0,
                     0,0,0,0,0,0,0,0,0,0,10,10,10,16,16,16,10,0,10,21,21,21,17,4,17,21,10,19,19,18,18,21,18,18,10,19,18,10,
                     0,0,0,0,0,10,10,10,10,10,21,21,10,16,10,10,0,0,0,10,14,14,14,14,15,15,10,19,19,11,18,16,11,18,21,10,18,10,
                     0,0,0,0,0,10,18,18,16,16,10,10,15,15,16,16,0,0,10,16,15,14,14,14,16,15,10,10,10,11,11,14,11,11,21,10,11,10,
                     0,0,0,0,0,10,16,16,16,16,20,10,14,14,14,15,16,16,16,16,15,14,14,16,14,16,15,15,15,11,18,15,11,18,10,10,11,10,
                     0,0,0,0,0,0,10,16,16,20,17,17,10,14,14,14,15,15,15,16,15,14,16,15,14,15,16,14,14,15,18,16,18,18,20,19,11,10,
                     0,0,0,0,0,0,0,10,16,16,20,10,16,16,14,14,14,14,16,14,14,14,16,10,10,10,10,10,10,10,4,16,20,20,20,19,11,10,
                     0,0,0,0,0,0,10,18,18,16,16,10,18,16,16,16,16,16,15,15,15,15,10,21,21,21,21,6,6,6,10,20,20,20,20,19,11,10,
                     0,0,0,0,0,10,18,16,18,16,10,10,18,16,10,0,10,15,20,4,20,10,21,21,21,21,6,6,6,6,6,10,20,20,20,19,11,10,
                     0,0,0,0,10,18,16,18,16,10,0,10,16,16,10,0,10,15,15,20,21,10,21,21,21,21,6,6,6,6,20,6,10,19,19,19,18,10,
                     0,0,0,10,18,16,18,16,10,0,0,0,10,10,0,10,15,15,10,21,20,10,21,21,11,10,10,11,6,6,6,11,19,11,18,18,18,10,
                     0,0,10,18,11,18,16,10,0,0,0,0,0,0,0,10,15,10,21,20,17,20,21,20,18,10,10,18,10,6,10,10,10,10,10,10,10,10,
                     0,10,18,16,18,16,10,0,0,0,0,0,0,0,0,10,15,10,10,20,17,20,21,21,10,10,10,10,20,20,20,10,10,0,0,0,0,0,
                     10,18,16,18,16,10,0,0,0,0,0,0,0,0,0,10,15,15,15,20,17,20,21,21,21,20,20,10,4,4,10,21,10,0,0,0,0,0,
                     10,11,18,16,10,0,0,0,0,0,0,0,0,0,0,10,15,15,15,20,17,20,21,21,20,10,10,4,4,4,20,10,10,20,20,20,0,0,
                     10,10,10,10,0,0,0,0,0,0,0,0,0,0,0,10,15,15,15,20,17,17,20,20,17,17,17,4,4,20,4,4,4,4,4,4,20,0,
                     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,15,15,15,20,17,17,17,17,17,4,4,4,4,4,4,4,4,4,20,0,0,
                     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,15,15,15,15,20,17,17,17,17,17,4,4,4,4,4,4,4,20,0,0,0,
                     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,15,15,15,15,20,17,17,17,17,17,17,4,4,4,4,20,0,0,0,0,
                     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,14,14,14,15,19,19,19,19,19,20,20,20,20,20,0,0,0,0,0,
                     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,14,14,14,14,14,14,14,14,14,14,15,10,10,0,0,0,0,0,0,
                     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,10,14,14,14,14,14,14,10,10,0,0,0,0,0,0,0,0,
                     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,10,10,10,10,10,0,0,0,0,0,0,0,0,0,0};
  
  int MegaMan[744] = {0,0,0,0,0,0,0,0,0,0,10,10,10,10,10,10,10,10,10,0,0,0,10,10,10,10,10,10,10,10,10,
                      0,0,0,0,0,0,0,0,0,0,10,8,8,8,8,8,8,8,10,0,0,0,10,8,8,8,8,8,8,8,10,
                      0,0,0,0,0,0,0,0,0,0,0,10,10,10,8,8,8,10,0,0,0,10,8,8,8,8,8,8,10,10,0,
                      0,0,0,0,0,0,0,0,0,0,0,0,10,8,8,8,8,10,0,0,10,9,9,8,8,8,10,10,0,0,0,
                      0,0,0,0,0,0,0,0,0,0,0,0,10,8,8,9,9,9,10,10,9,9,9,9,8,10,0,0,0,0,0,
                      0,0,0,0,0,0,0,0,0,0,0,0,0,10,9,9,9,8,8,8,8,9,9,9,10,0,0,0,0,0,0,
                      0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,9,8,8,8,8,8,8,9,10,0,0,0,0,0,0,0,
                      0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,8,8,8,8,8,8,8,10,0,0,0,0,0,0,0,0,
                      0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,9,9,9,9,9,8,8,10,10,0,0,0,0,0,0,0,
                      0,0,0,0,0,0,0,0,0,0,0,0,0,10,9,9,9,9,9,9,9,10,8,8,10,0,0,0,0,0,0,
                      0,0,0,10,10,10,10,0,10,10,10,10,10,9,9,9,9,9,9,9,10,8,8,8,8,10,0,0,0,0,0,
                      0,10,10,10,8,8,8,10,9,9,9,9,9,10,10,10,10,10,9,9,10,8,8,10,8,8,10,0,0,0,0,
                      10,8,10,8,8,8,8,10,9,9,9,9,10,6,6,6,6,6,10,9,9,10,8,10,8,8,8,10,0,0,0,
                      10,9,10,9,9,9,8,10,9,9,10,10,6,10,10,10,10,6,8,10,9,9,10,9,8,8,8,10,0,0,0,
                      0,10,10,10,8,8,8,10,10,10,10,6,11,6,11,11,11,6,6,8,10,9,9,9,9,9,8,10,0,0,0,
                      0,0,0,10,10,10,10,0,0,0,10,11,10,6,10,10,11,11,6,8,10,9,9,9,9,9,10,0,0,0,0,
                      0,0,0,0,0,0,0,0,0,0,10,11,10,6,10,10,11,11,6,8,9,10,9,9,10,10,0,0,0,0,0,
                      0,0,0,0,0,0,0,0,0,0,10,11,8,8,11,11,11,6,8,8,9,10,10,10,0,0,0,0,0,0,0,
                      0,0,0,0,0,0,0,0,0,0,10,8,10,10,8,8,8,8,8,8,9,10,0,0,0,0,0,0,0,0,0,
                      0,0,0,0,0,0,0,0,0,0,10,8,9,9,10,8,8,8,8,8,10,0,0,0,0,0,0,0,0,0,0,
                      0,0,0,0,0,0,0,0,0,0,0,10,10,10,10,8,8,8,8,8,10,0,0,0,0,0,0,0,0,0,0,
                      0,0,0,0,0,0,0,0,0,0,0,0,10,9,9,10,8,8,8,10,0,0,0,0,0,0,0,0,0,0,0,
                      0,0,0,0,0,0,0,0,0,0,0,0,0,10,9,9,10,10,10,0,0,0,0,0,0,0,0,0,0,0,0,
                      0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  
   int FlappyBird[204] = {0,0,0,0,0,0,10,10,10,10,0,0,0,0,0,0,0,
                          0,10,10,10,10,10,17,17,17,17,10,10,0,0,0,0,0,                        
                          0,10,22,22,22,22,10,17,17,17,17,17,10,0,0,0,0,                        
                          0,10,10,10,10,10,22,10,17,17,17,17,10,10,10,0,0,                          
                          10,22,22,22,22,22,10,4,4,4,4,10,4,4,4,10,0,                          
                          0,10,10,10,10,10,4,4,4,4,10,4,11,11,11,4,10,                          
                          0,0,10,11,11,11,10,4,4,4,10,11,11,11,11,11,10,                          
                          0,0,10,11,10,11,11,10,4,4,4,10,11,11,11,11,10,                          
                          0,0,10,11,10,11,11,10,4,4,4,4,10,10,10,10,0,                          
                          0,0,0,10,11,11,11,10,4,4,4,4,4,10,0,0,0,
                          0,0,0,0,10,11,10,4,4,4,4,10,10,0,0,0,0,
                          0,0,0,0,0,10,10,10,10,10,10,0,0,0,0,0,0};
                      
   
   int Gosht[256] = {2,0,0,0,2,2,0,0,2,2,0,0,0,2,
                      2,2,0,2,2,2,0,0,2,2,2,0,2,2,
                      2,2,2,2,2,2,2,2,2,2,2,2,2,2,
                      2,2,2,2,2,2,2,2,2,2,2,2,2,2,
                      2,2,2,2,2,2,2,2,2,2,2,2,2,2,
                      2,2,2,2,2,2,2,2,2,2,2,2,2,2,
                      2,2,2,2,2,2,2,2,2,2,2,2,2,2,                      
                      2,2,2,2,11,11,2,2,2,2,11,11,2,2,                      
                      2,2,2,11,11,7,7,2,2,11,11,7,7,2,
                      0,2,2,11,11,7,7,2,2,11,11,7,7,0,
                      0,2,2,11,11,11,11,2,2,11,11,11,11,0,
                      0,2,2,2,11,11,2,2,2,2,11,11,2,0,
                      0,0,2,2,2,2,2,2,2,2,2,2,0,0,
                      0,0,0,2,2,2,2,2,2,2,2,0,0,0,
                      0,0,0,0,0,2,2,2,2,0,0,0,0,0};
                      
                      
   int Hongo[256] = {0,0,10,10,10,10,10,0,0,10,10,10,10,10,0,0,
                     0,10,10,10,10,10,10,13,13,10,10,10,10,10,10,0,
                     0,10,10,10,10,10,13,13,13,13,10,10,10,10,10,0,
                     0,0,10,10,13,13,13,13,13,13,13,13,10,10,0,0,
                     0,0,0,0,13,13,13,13,13,13,13,13,0,0,0,0,
                     0,3,3,3,3,13,13,13,13,13,13,3,3,3,3,0,
                     3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,
                     3,3,3,3,11,11,11,3,3,11,11,11,3,3,3,3,
                     3,3,3,3,11,10,11,3,3,11,10,11,3,3,3,3,
                     0,3,3,3,11,10,10,10,10,10,10,11,3,3,3,0,                     
                     0,3,3,3,11,10,3,3,3,3,10,11,3,3,3,0,                     
                     0,0,3,10,10,3,3,3,3,3,3,10,10,3,0,0,                     
                     0,0,0,3,3,3,3,3,3,3,3,3,3,0,0,0,
                     0,0,0,0,3,3,3,3,3,3,3,3,0,0,0,0,
                     0,0,0,0,0,3,3,3,3,3,3,0,0,0,0,0,
                     0,0,0,0,0,0,3,3,3,3,0,0,0,0,0,0
                     };
   
   int Mario[448] = {10,10,10,10,10,10,0,0,0,0,10,10,10,10,10,10,
                 10,6,3,3,3,10,0,0,0,0,10,3,3,3,6,10,
                 0,10,3,3,3,10,0,0,0,0,10,3,3,3,10,0,
                 0,0,7,7,7,7,0,0,0,0,7,7,7,7,7,0,
                 0,0,7,8,8,8,7,0,0,0,7,8,8,8,7,0,
                 0,0,7,8,9,9,8,7,7,7,7,8,9,8,7,0,                 
                 0,0,7,8,9,9,9,9,9,9,9,9,9,8,7,0,                 
                 0,0,0,7,9,9,9,9,9,9,9,9,8,7,10,0,                 
                 0,0,0,7,9,11,11,9,9,9,9,11,11,7,11,10,
                 0,0,0,7,9,11,11,9,9,9,9,11,11,7,11,10,                 
                 0,0,0,12,7,8,9,9,9,9,9,9,8,11,11,10,                 
                 0,0,1,12,2,2,8,9,1,1,9,8,12,10,10,0,                 
                 0,0,1,2,2,2,8,8,12,12,8,8,2,1,0,0,                 
                 0,0,1,2,12,3,3,3,3,3,3,2,1,0,0,0,                 
                 0,1,2,12,12,1,5,5,5,5,5,3,3,0,0,0,                 
                 0,1,2,12,1,6,10,10,10,10,10,10,6,3,0,0,                 
                 0,1,2,12,1,10,10,10,10,10,10,10,10,6,3,5,     
                 0,1,2,12,1,10,10,5,5,5,5,10,10,6,10,5,                 
                 0,1,1,1,1,6,5,6,6,6,6,5,6,10,10,5,                 
                 10,11,11,11,11,10,11,10,6,6,10,11,6,6,10,5,                 
                 10,10,10,10,11,10,11,10,6,6,10,11,6,5,10,5,                 
                 10,11,10,11,11,10,11,11,5,5,11,11,10,10,1,0,                 
                 10,11,11,11,11,10,10,10,10,10,10,10,10,10,1,0,                 
                 0,10,10,10,10,10,10,10,10,10,10,10,10,12,1,0,                 
                 0,0,10,11,11,10,10,10,10,10,10,10,2,12,1,0,                 
                 0,10,11,10,11,10,2,3,11,11,3,2,2,1,0,0,               
                 0,10,10,11,10,10,1,2,3,4,2,1,1,0,0,0,
                 0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0};
                 
                 
//x = 15
//y = 16                  
   int Pacman[240] = {0,0,0,0,0,0,10,10,10,10,0,0,0,0,0,
                      0,0,0,0,10,10,4,4,4,4,10,10,0,0,0,
                      0,0,0,10,4,4,4,4,4,4,4,4,10,0,0,
                      0,0,10,4,4,4,4,4,4,4,4,4,4,10,0,
                      0,10,4,4,4,4,4,4,4,4,4,4,4,4,10,
                      0,10,4,4,4,4,4,4,4,4,4,4,10,10,0,
                      10,4,4,4,4,4,4,4,4,10,10,10,0,0,0,
                      10,4,4,4,4,4,4,4,10,0,0,0,0,0,0,
                      10,4,4,4,4,4,10,10,10,0,0,0,0,0,0,
                      10,4,4,4,4,4,4,4,4,10,10,10,0,0,0,
                      0,10,4,4,4,4,4,4,4,4,4,4,10,10,0,
                      0,10,4,4,4,4,4,4,4,4,4,4,4,4,10,
                      0,0,10,4,4,4,4,4,4,4,4,4,4,10,0,
                      0,0,0,10,4,4,4,4,4,4,4,4,10,0,0,
                      0,0,0,0,10,10,4,4,4,4,10,10,0,0,0,
                      0,0,0,0,0,0,10,10,10,10,0,0,0,0,0
                      };
   
   void draw( )
   {
      //DPacman();
      //DGosht();
      //DHongo();
      //DFlappyBird();
      //DMegaMan();
      //DMario();
      DZelda();
   }
   
   

   
   void DPacman(){
      int l=0;
      for(int y =-8; y<8;y++)
      {
         for(int x=-8;x<7;x++){
            Dibujo(x,y,Pacman[l]);
            l++;
         }
      }
   }
   
   
   void DMario(){
      int l=0;
      for(int y =-13; y<15;y++)
      {
         for(int x=-8;x<8;x++){
            Dibujo(x,y,Mario[l]);
            l++;
         }
      }
   }
   
   void DHongo(){
   
      int l=0;
      for(int y =-8; y<8;y++)
      {
         for(int x=-8;x<8;x++){
            Dibujo(x,y,Hongo[l]);
            l++;
         }
      }
         
   }
   
   void DGosht(){
   
      int l=0;
      for(int y =-8; y<8;y++)
      {
         for(int x=-7;x<7;x++){
            Dibujo(x,y,Gosht[l]);
            l++;
         }
      }
         
   }
   
   void DFlappyBird(){
   
      int l=0;
      for(int y =-6; y<6;y++)
      {
         for(int x=-8;x<9;x++){
            Dibujo(x,y,FlappyBird[l]);
            l++;
         }
      }
         
   }
   
   void DMegaMan(){
   
      int l=0;
      for(int y =-12; y<12;y++)
      {
         for(int x=-15;x<16;x++){
            Dibujo(x,y,MegaMan[l]);
            l++;
         }
      }
         
   }
   
   void DZelda(){
   
      int l=0;
      for(int y =-16; y<16;y++)
      {
         for(int x=-19;x<19;x++){
            Dibujo(x,y,Zelda[l]);
            l++;
         }
      }
         
   }
   
   void Dibujo(int x1, int y1,int c){
         
         glBegin(GL_TRIANGLES);
         {
            ElegirColor(c);
            glVertex3d(x1,y1,0);
            glVertex3d(x1+1,y1,0);
            glVertex3d(x1,y1+1,0);
         
            glVertex3d(x1+1,y1+1,0);
            glVertex3d(x1,y1+1,0);
            glVertex3d(x1+1,y1,0);
         }glEnd();
   }
   
   void ElegirColor(int color){
      switch(color){
         case 1: glColor3d(0.4627, 0.1059, 0.0941);break; //ginda
         case 2: glColor3d(1.0, 0.0, 0.0118);break; //rojo
         case 3: glColor3d(0.4275, 0.2667, 0.1451);break; //marron
         case 4: glColor3d(1.0, 0.8588, 0.0);break; //amarillo
         case 5: glColor3d(0.9412, 0.3882, 0.3843);break; //rosa oscuro
         case 6: glColor3d(0.9255, 0.8196, 0.7294);break; //rosa claro
         case 7: glColor3d(0.1176, 0.2275, 0.6980);break; //azul oscuro
         case 8: glColor3d(0.0314, 0.4745, 0.6509);break; //azul medio
         case 9: glColor3d(0.6078, 0.8392, 0.9373);break; //celeste
         case 10: glColor3d(0, 0, 0);break; //Negro
         case 11: glColor3d(1, 1, 1);break; //blanco
         case 12: glColor3d(0.7059, 0.0235, 0.0314);break; //rojo-medioOscuro
         case 13: glColor3d(1.0, 0.6275, 0.3725);break; //melon
         case 14: glColor3d(0.3255, 0.7804, 0.0);break; //verde claro
         case 15: glColor3d(0.0, 0.3882, 0.0);break; //verde medio
         case 16: glColor3d(0.0902, 0.1686, 0.0941);break; //verde oscuro
         case 17: glColor3d(1.0, 0.7373, 0.0);break; //amarillo claro
         case 18: glColor3d(0.6667, 0.7373, 0.7294);break; //plomo
         case 19: glColor3d(0.2824, 0.1725, 0.0784);break; //marron oscuro
         case 20: glColor3d(0.5184, 0.3216, 0.0);break; //marron claro
         case 21: glColor3d(0.9412, 0.7412, 0.4471);break;//rosa-clara-media
         case 22: glColor3d(1.0, 0.6, 0.0); break; //naranja
         //default: glColor3d(1,1,1);break; 
         default: glColor3d(0,0,0.2);break; //normal
      }
   
   }
};
//---------------------------------------------------------------------------
#endif