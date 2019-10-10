// Gera 10 matrizes quadradas aleatórias sendo a primeira 2x2 a segunda 3x3 ... 11x11 
//cada matiz tem os numeros aleatórios que variam de 1 ate o tamanho de linhas da matriz
//é gerado um txt xom o nome de SAIDA com o resultado tbm 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
	#define h 10

	 
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	FILE*p;
 	p=fopen("SAIDA.TXT","w");
 	srand(time(NULL));
 	int l = 1;
	int c = 1;
	 int r [h][l][c];
	 
	for(int k=0;k<h;k++){
		l++;
		c++;
		printf("Matriz %d : tamanho %d x %d, valores aleatórios entre 1 e %d \n",k+1,l,c,c);	
	 	for (int i=0;i<l;i++){
	 		for (int j=0;j<c;j++){
	 			r[k][i][j]=(rand()%l)+1;
	 			printf("%5d",r[k][i][j]);
	 			fprintf(p,"%5d",r[k][i][j]);
	 			
		 	}
		 printf("\n");
		 fprintf(p,"\n");
	 	} 

	printf("\n");
	fprintf(p,"\n");
 	}
 	
 	 fclose(p);
 	
 	getchar();
 	return 0;
 }
