/*Escreva	 um	 programa	 para	 ler	 o	 ano	 de	 nascimento	 de	 uma	 pessoa	 e	
escrever	 uma	 mensagem	 que	 diga	 se	 ela	 poderá	 ou	 não	 votar	 este	 ano	
(não	é	necessário	considerar	o	mês	em	que	ela	nasceu).*/

/*#include<stdio.h>

int main(){
    int ano;

    printf("Em que ano voce nasceu:\n");
    scanf("%d", &ano);

    if(ano < 2005){
        printf("Voce e maior de idade, dessa maneira pode votar esse ano.\n");
    }else {
        printf("Voce e menor de idade, dessa maneira nao pode votar esse ano.\n");
    }
}*/

/*Escreva	 um	 programa	 que	 verifique	 a	 validade	 de	 uma	 senha	 fornecida	
pelo	 usuário.	 A	 senha	 válida	 é	 o	 número	 1234.	Devem	 ser	impressas	 as	
seguintes	mensagens:	
ACESSO	PERMITIDO	caso	a	senha	seja	válida.	
ACESSO	NEGADO	caso	a	senha	seja	inválida.*/

/*#include<stdio.h>

int main(){
  int senha;

  printf("Insira a senha:\n");
  scanf("%d", &senha);

  if(senha == 1234){
      printf("Acesso permitido.\n");

    }else{
        printf("Acesso negado.");
    }
}*/

/*Escreva	 um	 programa	 para	 ler	 2	 valores	 (considere	 que	 	 não	 serão	
informados	valores	iguais)	e	escrever	o	maior	deles.*/

/*#include<stdio.h>

int main(){

  int valor1, valor2;

  printf("Insira o valor 1:\n");
  scanf("%d", &valor1);

  printf("Insira o valor 2:\n");
  scanf("%d", &valor2);

  if(valor1 > valor2){
    printf("%d e maior que o %d.\n", valor1, valor2);
  }else if(valor1 == valor2){
      printf("Os valores nao podem se coincidir.\n");
    }else if(valor2 > valor1){
      printf("%d e maior que o %d.\n", valor2, valor1);
    }
}*/