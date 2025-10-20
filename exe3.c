#include<stdio.h>

int main(void){
  double original, precofinal;
  int desconto;
  scanf("%lf\n", &original);
  scanf("%d\n", &desconto);
  
  if ((desconto <= 100) && (desconto >= 0)){
    if (original >= 0){
      precofinal = original * ((100 - desconto) / 100.0);
      printf("%0.2f\n", precofinal);

    }else{
      printf("ERRO, valor original do produto n pode ser negativo.\n");
      return 0;}
  } else {
     printf("ERRO, valor do desconto têm de estar entre 0-100\n");
     return 0;}
}

