# include <stdio.h>
main()
{
  int i, j, k;
  int m, n, p;
  i = 8;
  j = 10;
  k = 12;
  /* �����ڲ�����֮ǰ */
  m = ++i;
printf("i = %d\n", i);
printf("m = %d\n", m);
  /* �Լ��ڲ�����֮�� */
  n = j--;
  printf("j = %d\n", j);
  printf("n = %d\n", n);
  /* �������Լ��Ļ������ */
  p = (++m)*(n++)+(--k);
  printf("k = %d\n", k);
  printf("p = %d\n", p);
}
