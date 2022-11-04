#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct cadastrar{
	char nome[30];
	int idade;
	
}cadastrar;
void aloca_cadastrar(cadastrar **pc);
void cadastrar_(cadastrar *pc);
void mostra_(cadastrar *pc);
int main(){
	setlocale(LC_ALL, "Portuguese");
	int op;
	op = 0;
	
	cadastrar *pc = NULL;
	
	aloca_cadastrar(&pc);
	cadastrar_(pc);
	mostra_(pc);
	do{
	system("cls");
	printf("[4] Exit");
	}while(op !=4);
	
	
	return 0;
}
void aloca_cadastrar(cadastrar **pc){
	if((*pc =  (cadastrar*) realloc (*pc, 3* sizeof(cadastrar))) == NULL)
	exit (1);
}
void cadastrar_(cadastrar *pc){
	int i;
	for(i=0;i<3;i++){
	
	printf("Cadastar\n");
	printf("Digite seu Nome\n");
	fflush(stdin);
    gets(pc -> nome);
    printf("Digite sua Idade\n");
    gets(pc -> idade);
    pc -> nome;
    pc -> idade;
}
    system("pause");
}
void mostra_(cadastrar *pc){
	 pc -> nome;
    pc -> idade;
}

