#include <stdio.h>

#include "swap.h"
#define SUCCEED 0

int main( int argc, char** argv )
{
    int num1, num2;
    int *pNum1 = &num1;
    int *pNum2 = &num2;


    printf( "Hello World! \n" );
    printf( "Please input two integers which are devided by space: \n" );
    scanf( "%d %d" , pNum1, pNum2 );
    printf( "Ori number: %d %d \n" , num1, num2 );
    swap( pNum1, pNum2 );
    printf( "New number: %d %d \n" , num1, num2 );
    return 0;
}
