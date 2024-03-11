//Estruturas de decisao if, else, else if
//                      se, nao, senao se

#include <stdio.h>
//Declaracao de variavel
int main() { 
  int idade;
  //Entrada
  printf("Qual sua idade:\n");
  scanf("%d", &idade);
//Processsamento
  if(idade >=18){
    printf("Voce e menor de idade.\n");
  }else if(idade > 18 && idade < 60){
    printf("Voce e adulto.\n");
  }else{
    printf("Voce e idoso.\n");
  } 
  printf("Sua idade e: %d", idade);

  return 0;
} 