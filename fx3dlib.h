#ifndef _FX3DLIB_H
#define _FX3DLIB_H
#include <knightos/display.h>
#include <stdbool.h>
#define _FX3DLIB_ID 0x03

#define FX3DLIB_ROTATEVERTEX 6
unsigned char rotate_vertex(unsigned char locX, unsigned char locY, unsigned char resultX, unsigned char resultY, unsigned char angX, unsigned char angY);
#define FX3DLIB_PROJECTEVRTEX 9
unsigned char *project_vertex(unsigned char locX, unsigned char locY);
#define FX3DLIB_DRAWTRIANGLE 12
void draw_triangle(unsigned char x1, unsigned char y1, unsigned char x2, unsigned char y2, unsigned char x3, unsigned char y3, bool black);
#define FX3DLIB_MAKEVECTOR 15
unsigned char make_vector(unsigned char x1, unsigned char y1, unsigned char x2, unsigned char y2, unsigned char x3, unsigned char y3);
#define FX3DLIB_DOTPRODUCT 18
unsigned char dot_product(unsigned char x1, unsigned char y1, unsigned char x2, unsigned char y2);
#define FX3DLIB_CROSSPRODUCT 21
unsigned char cross_product(unsigned char x1, unsigned char y1, unsigned char x2, unsigned char y2, unsigned char x3, unsigned char y3);
#define FX3DLIB_TESTBACKFACE 24s
unsigned char test_backface(unsigned char *face_index, unsigned char *vert_list);
#endif