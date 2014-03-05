#include<stdio.h>

unsigned char enter_line(struct Line *pSeries, unsigned int size);

struct Lines
{

    int series1;
	int series2;

};


int main()
{
	unsigned int size = 0; 
	printf("Введіть кількість елементів :\n");
	scanf("%u", &size);
	struct Lines Series[ size ]; 
	struct Lines *pSeries = Series[size];
	
	enter_line( pSeries, size );


return 0;
}


unsigned char enter_line( struct Line *pSeries, unsigned int size )
{
	
	printf("Ведіть перший ряд з %u елементів", size);
	
	int i;
	for( i = 0; i != size; ++i )
	{

		scanf("%d", &(*pSeries).series1 );
        pSeries++;
	
	}

		printf("Ведіть другий ряд з %u елементів", size);
	
	int j;
	for( j = 0; j != size; ++j )
	{

		scanf("%d", &(*pSeries).series2 );
        pSeries++;
	
	}



	return 0;

}

