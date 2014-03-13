#ifndef MAINh
#define MAINh 1

	#include<stdio.h>
	#include<stdlib.h>
	#define ZERO 0
	#define ONE 1
	#define MAX 255
	void ClearScr();
	void About();
	char My_flush();
	void Show_help();
	void Print_line();
	unsigned char Preview();
	unsigned char Menu();
	unsigned char ChoiseKey();
	int Enter_size();
	int Program();
	void Print_vector( const int *pVec, const unsigned int size );
	int VectorScreen( int* pVec1, int* pVec2, const int size);
	void ChangesPosition( int* pVec1, int* pVec2, const unsigned int position1, const unsigned int position2 );
	#include"program.c"
#endif
