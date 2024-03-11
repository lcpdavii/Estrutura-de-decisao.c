#include<stdio.h>
//Usa-se switch onde tenhamos uma estrutura grande ou confusa de if /else /else if

/*Exemplo de um comando usando o switch:

Switch (variavel)(a cada instrucao BREAK, tem que ter um break){
  Case valor 1:
  Instrucoes;
  break;
  Case valor 2:
  Instrucoes;
  break;
  Default( usado quando nao e nem o valor 1 nem o valor 2)
  Instrucoes;}*/

//NAO É CASO, E SIM CASE

int main(){
  int valor;

  printf("1 - Domingo, 2 - Segunda, 3 - Terca, insira um valor:\n");
  scanf(" %d", &valor);

  switch(valor){
    case 1:
    printf("Domingo\n");
    break;
    case 2:
    printf("Segunda\n");
    break;
    case 3:
    printf("Terca\n");
    break;
    default:
    printf("Valor invalido\n");
  }
}
