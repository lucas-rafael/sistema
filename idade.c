#include<stdio.h>
#include<stdlib.h>
/* idade.c*/
/*programa para calcular a sua idade em dias*/
main()
{
	int anos; /*variaveis*/
	printf("Digite sua idade em anos: ");
	scanf("%i", &anos); /*ler idade em anos*/
	
	printf("Sua idade em dia e' %d \n", anos*365); /*impressao do resultado*/ 
	
	//retirar o system("pause"); para sistema linux
	system("pause");
}
