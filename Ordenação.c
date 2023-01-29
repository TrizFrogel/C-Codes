#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <locale.h>

void insertionSort(int vetor_numeros[],int tamanho)
{
	int i,chave,j;
	for(i=1;i<tamanho;i++){
		chave=vetor_numeros[i];
		j=i-1;
		
		while(j>=0 && vetor_numeros[j]>chave){
			vetor_numeros[j+1]=vetor_numeros[j];
			j=j-1;
		}
	vetor_numeros[j+1]=chave;
	for(j=0;j<tamanho;j++){
		printf("%d ", vetor_numeros[j]);
	}
	printf("\n");
	}
}

void mostraVetor(int vetor_numeros[],int tamanho)
{
	int i;
	for(i=0;i<tamanho;i++)
	printf("%d ",vetor_numeros[i]);
	printf("\n");
}

void main()
{
setlocale(LC_ALL, "Portuguese");

int escolha=1;

while (escolha!=5)
{
system("cls");
printf("INSERTION SORT!\n");
printf("===============\n");
printf("\n1-Letra A");
printf("\n2-Letra B");
printf("\n3-Letra C");
printf("\n4-Letra D");
printf("\n5-FINALIZAR");
printf("\n\nDigite a opção desejada:");
scanf("%d",&escolha);

switch (escolha) {

case 1:
{
system("cls");
printf("\n\nLetra A:\n");
int vetor_numeros[]={3,1,9,5,2,8};
int tamanho = sizeof(vetor_numeros)/sizeof(vetor_numeros[0]);
 
printf("Vetor original:\n");
mostraVetor(vetor_numeros,tamanho);
printf("Ordenação vetor:\n");
insertionSort(vetor_numeros,tamanho);

getch(); 

break;
}

case 2:
{
system("cls");
printf("\n\nLetra B:\n");
int numeros[]={13,100,19,55,2,28};
int tam = sizeof(numeros)/sizeof(numeros[0]);
 
printf("Vetor original:\n");
mostraVetor(numeros,tam);
printf("Ordenação vetor:\n");
insertionSort(numeros,tam);

getch(); 

break;
}

case 3:
{
system("cls");
printf("\n\nLetra C:\n");
int meros[]={100,69,455,1022,86,456,4,78,22};
int nho = sizeof(meros)/sizeof(meros[0]);
 
printf("Vetor original:\n");
mostraVetor(meros,nho);
printf("Ordenação vetor:\n");
insertionSort(meros,nho);

getch(); 

break;
}

case 4:
{
system("cls");
printf("\n\nLetra D:\n");
int vet[]={21,95,36,36,15,36,11,92,40,10,6,29,60,9,40,93,33,98,33,98,8,71,13};
int ta = sizeof(vet)/sizeof(vet[0]);
 
printf("Vetor original:\n");
mostraVetor(vet,ta);
printf("Ordenação vetor:\n");
insertionSort(vet,ta);

getch(); 

break;
}

default:
{
system("cls");

if( escolha==5)
{
continue;
}
printf("\n\n Nenhuma opção foi escolhida!");
break;
}

}

}

if( escolha==5)
printf("\n\nFIM DA EXECUÇÃO!");

getch(); 

}
