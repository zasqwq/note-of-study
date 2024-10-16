#include <stdio.h>
main()
{
  int x,y,z;
  x=y=z=-1;
  ++x&&++y||++z;
  printf("x=%d\ty=%d\tz=%d\n",x,y,z);
  /*”\t”为按横向跳格格式输出*/
  x=y=z=-1;
  ++x||++y&&++z;
  printf("x=%d\ty=%d\tz=%d\n",x,y,z);
  x=y=z=-1;
  ++x&&++y&&++z;
  printf("x=%d\ty=%d\tz=%d\n",x,y,z);
}
