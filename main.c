#include <stdio.h>
int main(void)
{
  int i,j;
  printf("Enter i = ");
  scanf("%d",&i);
  printf("Enter j = ");
  scanf("%d",&j);
  j +=  i;
  printf("%d %d\n",i,j);
  j -=  i;
  printf("%d %d\n",i,j);
  j *=  i;
  printf("%d %d\n",i,j);
  j /=  i;
  printf("%d %d\n",i,j);
  return 0;
}
