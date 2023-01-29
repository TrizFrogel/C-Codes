#include <stdio.h>
#include <stdlib.h>

int num;
FILE* f;
int segredo;

void compara(num)
{

f=fopen("secret.txt","r+");
fscanf(f,"%d",&segredo);

if (num==segredo)
{
	printf("Acertou!\n");
	printf("======================\n\n");
}
	else
	{
		printf("Errou!Tente novamente!\n\n");
		printf("======================\n\n");
	}
}

main()
{
int i;
printf("Adivinhe o numero em 10 tentativas! Boa Sorte!\n");
do{
i=i+1;
printf("Chute um numero!\n");
scanf("%d",&num);
compara(num);
if(i==10){
	printf("Tentativas esgotadas!\n");
	printf("O numero era: %d", segredo);
	break;
}
}
while(i<10,num!=segredo);
}
