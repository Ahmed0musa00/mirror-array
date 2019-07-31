#include <stdio.h>
#define SIZE 10

/* function prototype */
void mirror( const int b[], int startIndex, int size );

/* function main begins program execution */
int main( void )
{
 int a[ SIZE ] = { 8, 3, 1, 2, 6, 0, 9, 7, 4, 5 }; /* initialize a */

 printf( "Answer is:\n" );
 mirror( a, 0, SIZE );
 printf( "\n" );
 return 0; /* indicates successful termination */
} /* end main */

/* What does this function do? */
void mirror( const int b[], int startIndex, int size )
{
 if ( startIndex < size ) {
 mirror( b, startIndex + 1, size );
 printf( "%d ", b[ startIndex ] );
} /* end if */
} /* end function mirror */
