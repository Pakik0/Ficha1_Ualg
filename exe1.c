#include<stdio.h>
int main(void){
  int a, b, c, d, e;
  double media;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  scanf("%d", &e);
  media = (a + b + c + d + e) / 5.0;
  printf("%0.3f\n", media);
  return 0;
}

