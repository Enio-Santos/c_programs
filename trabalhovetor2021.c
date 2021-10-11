//Programa que cria vetor com 30 posicoes e determina qual a media dos valores, qual o maior e qual o menor valor
#include <stdio.h>
main()
{
int vet[30],i,maior,menor,media,soma;
for (i=0;i<30;i++)//atribuindo valores para o vetor
	{
		printf("\nDigite a posicao [%d] do vetor: ",i);
		scanf("%d",&vet[i]);
	}	
menor=vet[0];
maior=vet[0];
for (i=0;i<30;i++)//analisando o vetor
	{
		if (vet[i]<menor)
		{
			menor=vet[i];
		}
		if (vet[i]>maior)
		{
			maior=vet[i];
		}
		soma = soma+vet[i];		
	}
media = soma/30;
printf("\nO Menor valor eh: %d",menor);
printf("\nO Maior valor eh: %d",maior);
printf("\nA Media de valores eh: %d",media);
getchar();
}
