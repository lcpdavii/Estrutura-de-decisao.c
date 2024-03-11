#include<stdio.h>
//. Faça um programa que leia três valores e apresente como resultado a soma dos quadrados dos valores lidos.
int main(){
  int valor1, valor2, valor3, soma;

  printf("Insira o valor de 1:\n");
  scanf("%d", &valor1);
  
  printf("Insira o valor de 2:\n");
  scanf("%d", &valor2);
  
  printf("Insira o valor de 3:\n");
  scanf("%d", &valor3);

  soma = (valor1 * valor1) + (valor2 * valor2) + (valor3 * valor3);

  printf("a soma dos quadrados dos valores e: %d", soma);
}