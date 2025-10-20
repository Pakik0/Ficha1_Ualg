#include<stdio.h>
#include<math.h>

int main(void){
  float x;
  double result;
  scanf("%f", &x);
  result = (2 * tan(x))/(1 + pow(tan(x), 2.0));
  printf("%0.3lf\n", result);
  return 0;
}

