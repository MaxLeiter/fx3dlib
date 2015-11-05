include .knightos/variables.make

ALL_TARGETS:=$(LIB)fx3dlib $(SLIB)fx3dlib $(INC)fx3dlib.inc $(INC)fx3dlib.h

$(LIB)fx3dlib: dependencies fx3dlib.asm
	mkdir -p $(LIB)
	sass --include .knightos/include/ $(ASFLAGS) fx3dlib.asm $(LIB)fx3dlib

$(SLIB)fx3dlib: dependencies $(OUT)bindings.o
	mkdir -p $(SLIB)
	scas -c -o $(SLIB)fx3dlib $(OUT)bindings.o

$(INC)fx3dlib.inc: fx3dlib.inc
	mkdir -p $(INC)
	cp fx3dlib.inc $(INC)

$(INC)fx3dlib.h: fx3dlib.h
	mkdir -p $(INC)
	cp fx3dlib.h $(INC)

include .knightos/sdk.make
