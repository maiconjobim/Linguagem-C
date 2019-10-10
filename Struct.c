# include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
# include <string.h>
	#define h 10

	 
 int main()
 {
 	setlocale(LC_ALL, "Portuguese");
 	
 	
 		struct Alunos
		{
			char nome[32];
			int idade;
			float media;
		}aluno1,aluno2;
	
	strcpy(aluno1.nome,"Pedro");
	puts("Digite o nome do primeiro aluno :");
	gets(aluno1.nome);
	puts("Digite a Idade do primeiro aluno :");
	scanf("%d",&aluno1.idade);
	puts("Digite a media do primeiro aluno :");
	scanf("%f",&aluno1.media);
	printf("\n");
	fflush(stdin);
	
	strcpy(aluno2.nome,"Pedro");
	puts("Digite o nome do segundo aluno :");
	gets(aluno2.nome);
	puts("Digite a Idade do segundo aluno :");
	scanf("%d",&aluno2.idade);
	puts("Digite a media do segundo aluno :");
	scanf("%f",&aluno2.media);
	
	
	
	printf("%s tem %d anos e tem a media %.1f\n",aluno1.nome,aluno1.idade,aluno1.media);
	printf("%s tem %d anos e tem a media %.1f\n",aluno2.nome,aluno2.idade,aluno2.media);
 	
 	
 	
 	
 	
 	
 	
 	getchar();
 	return 0;
 }
