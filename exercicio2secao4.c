//Leia quatro notas, calcule a média aritmética e imprima o resultado. 

#include<stdio.h>

int main(){
  float nota1, nota2, nota3, nota4, media;

  printf("Insira a nota 1:\n");
  scanf("%f", &nota1);

  printf("Insira a nota 2:\n");
  scanf("%f", &nota2);

  printf("Insira a nota 3:\n");
  scanf("%f", &nota3);

  printf("Insira a nota 4:\n");
  scanf("%f", &nota4);

  media = (nota1 + nota2 + nota3 + nota4)/ 4;

  printf("A media das notas foi de: %.2f", media);
}