#include<stdio.h>

#define ZERO 0
#define ONE 1
#define MAX 255
void clearScr();
void about();
char my_flush();
void show_help();
void print_line();
unsigned char preview();
unsigned char menu();
unsigned char choiseKey();
unsigned int enter_size();
int program();
struct Lines
{

long int series1;
long int series2;

};


/* MAIN FUNCTION */
int main()

{
    program();

    return ZERO;
}

/* PROGRAM FUNCTION */
int program()
{
    char exit1 = 'y';
    unsigned char size;

    while(exit1 != 'n')

    {
        menu( );
        print_line();

        size = enter_size();
        printf("size %d", size);


        puts("\nDo you want one more time?( y / n ) : ");
        exit1 = getchar( );
        my_flush( );
        if( exit1 == 'n' )
        {
            clearScr();
            about();
            puts("\tGOOD LUCK !!!\n");
        }

    }

    return ZERO;

}

/* MENU FUNCTION */
unsigned char menu()
{
	char ch;

    clearScr();
    preview();

	ch = choiseKey();

	
    return ZERO;
}


/* PREVIEW FUNCTION */
unsigned char preview()
{
	
    puts( "____ Program which change elements from 2 series ____\n" );
	print_line();
    puts("\n\t- MENU -\nChoose your option : \n");
    puts("\n1) h -key for help \"h\"\n");
    puts("\n2) w -key for normally work \"w\"\n");
    puts("\n3) a -key for about \"a\"\n");

	print_line();
    puts("Please choose your key\n");
	
    return ZERO;
}
/* PRINT_LINE FUNCTION */
void print_line()
{

    puts( "______________________________________________________________________________\n" );

}
/* choiseKey FUNCTION */
unsigned char choiseKey()
{
    unsigned char choise;

    while( ONE )
	{
        scanf("%c", &choise);
		my_flush();
		
        switch (choise)
        {
            case 'w' :
                return choise;
                break;

            case 'h' :
                show_help();
                break;

            case 'a' :
                about();
                break;

            default:
                printf( "Eror! It's \"%c\" wrong option\n", choise );
                puts( "Please, read - MENU - for perfect choose !\n" );
                print_line();
                break;
        }

    }

}
/* MY_FLUSH FUNCTION */
char my_flush()
{
    char ch;
    while ( ( ( ch = getchar( ) ) != '\n' ) && ( ch != EOF ) )
	
	{	
        ;	/* discard symols */
	}

	return ch;

}
/* ABOUT MASSEGE */
void about()
{

    puts("\n\tCreated by Mykola Hlynka 2014\n\tAll rights reserved\n");
	print_line();
}
/* HELP */
void show_help()
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
unsigned int enter_size()
{	
    unsigned int  digit = ZERO;
	
    while( ONE )
	{
		printf("How much elements does you need (limit from 1 to 255 ) :\n");
		scanf( "%d", &digit );
		my_flush();

		printf("%d ---\n", digit);
			
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
void clearScr()
{

    system("clear");
    //system("cls");

}
