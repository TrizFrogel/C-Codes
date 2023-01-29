#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

char novapalavra[20];
FILE* f;
	
void adicionapalavra() {
char quer;
	printf("Você deseja adicionar uma nova palavra no jogo (S/N)?");
	scanf(" %c", &quer);
if(quer == 'S') {
	printf("Digite a nova palavra, em letras maiúsculas: ");
	scanf("%s", novapalavra);
	
	f = fopen("palavras.txt", "a");
if(f == 0) {
	printf("Banco de dados de palavras não disponível\n\n");
	exit(1);
}

fprintf(f, "%s", novapalavra);

fclose(f);
}
}

void lerpalavra()
{
	f = fopen("palavras.txt", "r+");
	fseek(f, 0, SEEK_SET);
	fscanf(f, "%s", novapalavra);
	printf("%s", novapalavra);
	fclose(f);
}

main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Programa que adicona palavra em arquivo!\n"); 
	adicionapalavra();
	lerpalavra();
}
