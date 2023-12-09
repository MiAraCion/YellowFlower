#ifndef SCENE_H
#define SCENE_H
//---------------------------------------------------------------------------
// Programming 3D to Newbies : Indiana Aiki
//---------------------------------------------------------------------------
class Scene
{
public:
	Scene      ( ){ }
	void draw  ( ){ }
	void click ( ){ }
};
//---------------------------------------------------------------------------
#include <time.h>
double seconds ( )
{
	static clock_t  t_ini = clock( );
	return (double)(clock() - t_ini) / CLOCKS_PER_SEC;
}
//---------------------------------------------------------------------------
#endif
