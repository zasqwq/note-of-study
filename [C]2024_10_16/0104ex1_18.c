/* Note:Your choice is C IDE */
#include "stdio.h"
void main()
{
    int x=5, y=2, z ,m;
    m= x > y? 1 : 1.5;
    z = sizeof( x > y? 1 : 1.5 );
    printf("%d,%d",z,m);
}