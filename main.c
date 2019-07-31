#include <stdio.h>

/* function prototype */
void mirror( const int b[], int startIndex, int size );

/* function main begins program execution */
int main( void )
{
    int size;
    printf("Enter the array size : ");
    scanf("%d",&size);
    int a[ size ]; /* initialize a */
    printf("Enter the array element\n");
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
 printf( "Answer is:\n" );
 mirror( a, 0, size );
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
