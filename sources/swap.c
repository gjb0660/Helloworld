#include <stdio.h>

void swap( int *pNum1, int *pNum2 )
{
    int tmp;
    int *pTmp = &tmp;
    *pTmp = *pNum1;
    *pNum1 = *pNum2;
    *pNum2 = *pTmp;
    return;
}
