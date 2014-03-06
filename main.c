#include<stdio.h>
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
    unsigned char size;

    while(exit1 != 'n')

    {
        Menu( );
        Print_line();

        size = Enter_size();
        printf("size %d", size);


        puts("\nDo you want one more time?( y / n ) : ");
        exit1 = getchar( );
        My_flush( );
        if( exit1 == 'n' )
        {
            ClearScr();
            About();
            puts("\tGOOD LUCK !!!\n");
        }

    }

    return ZERO;

}

/* MENU FUNCTION */
unsigned char Menu()
{
	char ch;

    ClearScr();
    Preview();

    ch = ChoiseKey();

	
    return ZERO;
}


/* PREVIEW FUNCTION */
unsigned char Preview()
{
	
    puts( "____ Program which change elements from 2 series ____\n" );
    Print_line();
    puts("\n\t- MENU -\nChoose your option : \n");
    puts("\n1) h -key for help \"h\"\n");
    puts("\n2) w -key for normally work \"w\"\n");
    puts("\n3) a -key for about \"a\"\n");

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

            case 'h' :
                Show_help();
                break;

            case 'a' :
                About();
                break;

            default:
                printf( "Eror! It's \"%c\" wrong option\n", choise );
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

    puts( "Please, read - Instruction - for perfect job !\n" );

}
/* ENTER_SIZE FUNCTION */
unsigned char Enter_size()
{	
    unsigned char  digit = ZERO;
	
    while( ONE )
	{
		printf("How much elements does you need (limit from 1 to 255 ) :\n");
        scanf( "%c", &digit );
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
