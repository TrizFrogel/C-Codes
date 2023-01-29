#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct ender{
	int cep;
	char rua[50];
	char bairro[50];
	};

struct no{
	int cod;
	int tel;
	char nome[50];
	struct ender end;
	struct no *anterior;
};

struct no *topo;

void empilhar(){
	struct no *novo;
	novo=(struct no*)malloc(sizeof(struct no));
	topo=novo;
	
	novo->anterior=NULL;
	
	
	printf("----Dados cadastrais:----\n");
	printf("Código do cliente:\n");
	fflush(stdin);
	scanf("%d", novo->cod);
	fflush(stdin);
	printf("Nome:\n");
	fflush(stdin);
	scanf("%s", novo->nome);
	printf("Telefone:\n");
	scanf("%d", novo->tel);
	fflush(stdin);
	printf("----Seção endereço:----\n");
	printf("Cep:\n");
	scanf("%d", novo->end.cep);
	fflush(stdin);
	printf("Rua:\n");
	scanf("%s", novo->end.rua);
	fflush(stdin);
	printf("Bairro:\n");
	scanf("%s", novo->end.bairro);
	fflush(stdin);
	printf("\nFinishedi\n");
}

struct no*aux;

void mostrar(){
	aux=topo;
	do{
		aux=aux->anterior;
	} while(aux!=NULL);

}

void menu(){
	printf("*MENU DE OPCÕES*\n");
	printf("1-Cadastrar novo cliente.....\n");
	printf("2-Consultar clientes cadastros.....\n");
	printf("3-SAIR.....\n");
}


void main(){
	int op;
	printf("====Bem-Vindo a loja Lindokoas====\n");	setlocale(LC_ALL, "Portuguese");
	while(op!=3){
	menu();
	printf("Digite a opção desejada:.....\n");
	scanf("%d", &op);
	system("cls");
	switch(op){
		
    case 1:
	empilhar();
	printf("Cadastrado com sucesso!\n");
	break;
	
	case 2:
	mostrar();
	break;
	
	case 3:
	exit(0); 
	break;	
    
	default:
	printf ("Opção Inválida!!\n");
}
	getch();	
}
}

