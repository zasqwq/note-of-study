#include <stdio.h>
main()
{
  int x,y,z;
  x=y=z=-1;
  ++x&&++y||++z;
  printf("x=%d\ty=%d\tz=%d\n",x,y,z);
  /*��\t��Ϊ�����������ʽ���*/
  x=y=z=-1;
  ++x||++y&&++z;
  printf("x=%d\ty=%d\tz=%d\n",x,y,z);
  x=y=z=-1;
  ++x&&++y&&++z;
  printf("x=%d\ty=%d\tz=%d\n",x,y,z);
}
