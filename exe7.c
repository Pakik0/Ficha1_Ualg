#include <stdio.h>
#include <stdlib.h>
int main(){
  int calc, x1, y1, x2, y2;
  scanf("%d %d", &x1, &y1);
  scanf("%d %d", &x2, &y2);
  calc = abs(x2 - x1)+abs(y2 - y1);
  printf("%d\n",calc);
  return 0;
}

