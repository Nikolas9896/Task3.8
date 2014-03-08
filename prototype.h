#ifndef MAINh
#define MAINh 1

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

#endif
