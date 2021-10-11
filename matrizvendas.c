//Programa que cria uma matriz 4x4 e calcula qual linha tem a maior soma
#include <stdio.h>
main()
{
int mat[4][4],i,j,loja1,loja2,loja3,loja4;

for (i=0;i<4;i++)//atribuindo valores para o vetor
	{
		for (j=0;j<4;j++)
		{
			printf("\nDigite a posicao [%d][%d] do vetor: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
for (i=0;i<4;i++)//calculando a soma de cada linha
	{
		for (j=0;j<4;j++)
		{
			if (i==0)
			{
				loja1=loja1+mat[i][j];
			}
			if (i==1)
			{
				loja2=loja2+mat[i][j];
			}
			if (i==2)
			{
				loja3=loja3+mat[i][j];
			}
			if (i==3)
			{
				loja4=loja4+mat[i][j];
			}			
		}		
	}
printf("\nO total de vendas da loja 1 eh: %d",loja1);	
printf("\nO total de vendas da loja 2 eh: %d",loja2);
printf("\nO total de vendas da loja 3 eh: %d",loja3);
printf("\nO total de vendas da loja 4 eh: %d",loja4);	
getchar();
}
