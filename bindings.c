#include "fx3dlib.h"
#include <knightos/display.h>
unsigned char rotate_vertex(unsigned char locX, unsigned char locY, unsigned char resultX, unsigned char resultY, unsigned char angX, unsigned char angY) {
	__asm
	POP HL
	POP HL ; locX, locY
	POP DE ; resultX, resultY
	POP BC ; x, y
		ld a, b
		ld b, c
		ld c, a
		RST 0x10
		.db _FX3DLIB_ID
		CALL _FX3DLIB_ROTATEVERTEX
		PUSH DE
			LD D, 0
			LD E, 0
			JR Z, ROTATE_VERTEX_RETURN
			INC D
ROTATE_VERTEX_RETURN:
			LD HL, DE
		POP DE
	PUSH BC
	PUSH DE
	PUSH HL
	PUSH HL
	__endasm;
	locX; locY; resultX; resultY; angX; angY;
}
