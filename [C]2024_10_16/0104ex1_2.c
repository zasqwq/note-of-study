#include <stdio.h>
#define  PRICE 12.5
main()
 {     
	int   num=3;
    float   total;
    char   ch1,ch2='D';
    total=num*PRICE;
    ch1=ch2-'A'+'a'; 
    printf("total=%f,ch1=%c\n",total,ch1);
 }

