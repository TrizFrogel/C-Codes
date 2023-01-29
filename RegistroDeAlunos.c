#include <stdio.h>
#include <stdlib.h>

FILE* f;
int compara;

struct ficha_de_aluno
{
	int codigo;
	char nome [50];
	char disciplina [30];
}aluno[1];

main(){
	int i,j,k;
	
	//EXERCICIO 1
	printf("Programa exercicio 1!\n");
	for(i=0;i<5;i++){
		printf("Alunos!\n");
		printf("Codigo de matricula:\n");
		scanf("%d", &aluno[i].codigo);
		printf("Nome:\n");
		scanf("%s", aluno[i].nome);
		printf("Disciplina:\n");
		scanf("%s", aluno[i].disciplina);
	}
	getch();
	system("cls");
	
	//EXERCICIO 2
	printf("Programa exercicio 2!\n");
	for(j=0;j<5;j++){
		printf("Registro de alunos!\n");
		printf("Codigo: %d\n",aluno[j].codigo);
		printf("Nome: %s\n",aluno[j].nome);
		printf("Disciplina: %s\n",aluno[j].disciplina);
	}
	getch();
	system("cls");
	
	//EXERCICIO 3
	printf("Programa exercicio 3!\n");
	f=fopen("matricula.txt","r+");
    fscanf(f,"%d",&compara); 
    for(k=0;k<5;k++){
    	if(aluno[k].codigo==compara){
    		printf("Matricula compativel!\n");
    		printf("Encontrado na posicao: %d \n", k);
		}
		else{
			printf("Matricula inexistente!\n");
    		printf("Na posicao: %d \n", k);	
		}
	}
	getch();
	system("cls");
}
