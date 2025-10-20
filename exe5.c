#include<stdio.h>

int main(void){
  int n, soma = 0;
  scanf("%d", &n);
  if ((n >= 0) && (n < 100000)){
    while (n > 0){
      soma += n % 10;
      n /= 10;
    }
    printf("%d\n", soma);
    return 0;
  }else{
    printf("ERRO, O valor tem de ser entre 0-100000");
    return 0;
  }
}

