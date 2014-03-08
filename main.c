#include<stdio.h>
#include<stdlib.h>
#include"prototype.h"

/* MAIN FUNCTION */
int main()

{
    Program();

    return ZERO;
}

/* PROGRAM FUNCTION */
int Program()
{
    char exit1 = 'y';
    char stopChange = 'y';
    int size = ZERO;
    int* pVec1 = ZERO;
    int* pVec2 = ZERO;
    unsigned int ind;
    unsigned int position1 = ZERO, position2 = ZERO;

    while(exit1 != 'n')

    {
        Menu( );
        Print_line();

        size = Enter_size();
        printf( "size %d\n", size );

        pVec1 = ( int * )malloc( size * sizeof( int ) );

        if( pVec1 != ZERO )
        {
            puts( "Enter first vector of elements: " );

            for(ind = 0; ind != size; ++ind )
            {

                scanf("%d", ( pVec1 + ind) );

            }

            My_flush();


        }

        else
        {
            puts( "WARNING !!! Memory Error! Please restart the Program" );
            return -1;
        }


        pVec2 = ( int * )malloc( size * sizeof( int ) );

            if( pVec2 != ZERO )
            {

                puts( "Enter second vector of elements: " );

                for(ind = 0; ind != size; ++ind )
                {

                    scanf( "%d", ( pVec2 + ind) );

                }

                My_flush();

            }

            else
            {
                puts( "WARNING !!! Memory Error! Please restart the Program" );
                return -2;
            }

        ClearScr();
        while( stopChange != 'n' )
        {
            VectorScreen( pVec1, pVec2, size );
            printf("Enter No. position which do you want change in first vector( from 0 to %d )\n", (size - 1) );
            scanf( "%d", &position1 );
            My_flush();
            printf("Enter No. position which do you want change in second vector( from 0 to %d )\n", (size - 1) );
            scanf( "%d", &position2 );
            My_flush();
            if (  ( !( position1 >= ZERO ) && !( position1 <= size - ONE ) )\
               || ( !( position2 >= ZERO ) && !( position2 <= size - ONE ) ) )
            {
                printf("WARNING !!! No. position not valid! (That must be from 0 to %d )\n", (size -1) );
            }

            else
            {
                ChangesPosition( pVec1, pVec2, position1, position2 );
                puts( "\nDo you want one more change?( y / n ) : " );
                stopChange = getchar();
                My_flush();
            }
        }
        VectorScreen(pVec1, pVec2, size);
        free( pVec1 );
        free( pVec2 );
        My_flush();
        puts( "\nDo you want one more time?( y / n ) : " );
        My_flush( );
        exit1 = getchar( );
        My_flush( );
        if( exit1 == 'n' )
        {
            ClearScr();
            About();
        }

    }

    return ZERO;

}

/* MENU FUNCTION */
unsigned char Menu()
{
    ClearScr();
    Preview();
    ChoiseKey();

	
    return ZERO;
}


/* PREVIEW FUNCTION */
unsigned char Preview()
{
	
    puts( "____ Program which change elements from 2 series ____\n" );
    Print_line();
    puts("\n\t- MENU -\nChoose your option : \n");
    puts("\n1) h -key for - HELP - \"h\"\n");
    puts("\n2) w -key for normally work \"w\"\n");
    puts("\n3) a -key for about \"a\"\n");
    puts("\n4) q -key for quit \"q\"\n");

    Print_line();
    puts("Please choose your key\n");
	
    return ZERO;
}
/* PRINT_LINE FUNCTION */
void Print_line()
{

    puts( "______________________________________________________________________________\n" );

}
/* choiseKey FUNCTION */
unsigned char ChoiseKey()
{
    unsigned char choise;

    while( ONE )
	{
        scanf("%c", &choise);
        My_flush();
		
        switch (choise)
        {
            case 'w' :
                return choise;
                break;

            case 'q' :
                ClearScr();
                About();
                exit( ONE );
                break;

            case 'h' :
                Show_help();
                break;

            case 'a' :
                About();
                break;

            default:
                printf( "Eror!!! It's \"%c\" wrong option\n", choise );
                puts( "Please, read - MENU - for perfect choose !\n" );
                Print_line();
                break;
        }

    }

}
/* MY_FLUSH FUNCTION */
char My_flush()
{
    char ch;
    while ( ( ( ch = getchar( ) ) != '\n' ) && ( ch != EOF ) )
	
	{	
        ;	/* discard symols */
	}

	return ch;

}
/* ABOUT MASSEGE */
void About()
{

    puts("\n\tCreated by Mykola Hlynka 2014\n\tAll rights reserved\n");
    Print_line();
}
/* HELP */
void Show_help()
{

    puts( "\n\t- HELP - \n" );
    puts( "1) Enter key \"w\" for begining work\n" );
    puts( "2) Enter size with limits from 1 to 255 sybols\n" );
    puts( "3) Enter first linely vector (Exemple: -23 50 ... etc.)\n" );
    puts( "4) Enter second linely vector (like first)\n" );
    puts( "5) Enter No. position which you want to change with limits from 1 to maxsize\n" );
    puts( "6) Catch your matrix\n");

    puts( "Please, read - HELP - for perfect job !\n" );

}
/* ENTER_SIZE FUNCTION */
int Enter_size()
{	
    int digit = ZERO;
	
    while( ONE )
	{
		printf("How much elements does you need (limit from 1 to 255 ) :\n");
        scanf( "%d", &digit );
        My_flush();

        printf("%u ---\n", digit);
			
        if( ( digit > MAX ) || ( digit < ZERO ) )

        {
		
			printf( "Warning!!! Limit 1 to 255\n" );
		
		}

        else if( ( digit <= MAX ) && ( digit != ZERO ) )

        {
				
			return digit;
		
		}

	}
}
/* CLEAR SCREEN FUNCTION */
void ClearScr()
{

    system("clear");
    //system("cls");

}
int VectorScreen( int* pVec1, int* pVec2, const int size)
{

    if( ( pVec1 == 0 ) || ( pVec2 == 0 ) )
    {
        puts( "WARNING !!! Memory Error! Please restart the Program" );
       return -1;
    }

    else
    {
        puts( "First vector of elements: \n");
        Print_vector( pVec1, size );
        puts( "Second vector of elements: \n");
        Print_vector( pVec2, size );

        return 0;
    }

}
void Print_vector( const int *pVec, const unsigned int size )
{
    int i;
    for( i = 0; i != size; ++i)
    {

        printf("%d ", *( pVec + i ) );

    }
    puts( "\n" );

}
void ChangesPosition( int* pVec1, int* pVec2, const unsigned int position1, const unsigned int position2 )
{

    int temp = pVec1[ position1 ];
    pVec1[ position1 ] = pVec2[ position2 ];
    pVec2[ position2 ] = temp;

}
