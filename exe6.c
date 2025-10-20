#include<stdio.h>
#include<math.h>
int main(void){
  double a, b, c, x, y;  
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);
  x = -((b)/(2 * a));
  y = -((pow(b,2) - 4 * a * c)/(4 * a));
  printf("%.3f %.3f\n", x, y);
  return 0;
}

