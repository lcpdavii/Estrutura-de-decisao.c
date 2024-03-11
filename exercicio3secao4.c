/*Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao
valor que cada um deu para a realização da aposta. Faça um programa que leia quanto cada apostador
apostou, o valor do prêmio e imprima quanto cada um ganharia do prêmio com base no valor investido.*/
#include<stdio.h>

int main(){
  float aposta1, aposta2, aposta3, TotalApostas = 0;
  float premio = 0;
  float porcentagem1, porcentagem2, porcentagem3, porcentagemTotal = 0;
  float premio1, premio2, premio3, totalPremios = 0;

  printf("Informe o valor da aposta do apostador 1:\n");
  scanf("%f", &aposta1);

  printf("Informe o valor da aposta do apostador 2:\n");
  scanf("%f", &aposta2);

  printf("Informe o valor da aposta do apostador 3:\n");
  scanf("%f", &aposta3);

  printf("Informe o valor do premio:\n");
  scanf("%f", &premio);

  TotalApostas = (float)(aposta1 + aposta2 + aposta3);
  printf("O total de apostas foi de: %.2f\n", TotalApostas);

  porcentagem1 = (float)(aposta1 / TotalApostas);
  porcentagem2 = (float)(aposta2 / TotalApostas);
  porcentagem3 = (float)(aposta3 / TotalApostas);
  porcentagemTotal = (float)(porcentagem1 + porcentagem2 + porcentagem3);

  printf("o total de porcentagens e: %.2f\n", porcentagemTotal);

  premio1 = (float)(premio * porcentagem1); 
  premio2 = (float)(premio * porcentagem2);
  premio3 = (float)(premio * porcentagem3);

  totalPremios = (float)(premio1 + premio2 + premio3);
  printf("O total de premios e: %.2f\n", totalPremios);

  printf("O apostador 1 apostou %.2f que corresponde a %.2f e devera receber o premio de %.2f\n", aposta1, porcentagem1, premio1);

  printf("O apostador 2 apostou %.2f que corresponde a %.2f e devera receber o premio de %.2f\n", aposta2, porcentagem2, premio2);

  printf("O apostador 3 apostou %.2f que corresponde a %.2f e devera receber o premio de %.2f\n", aposta3, porcentagem3, premio3);
}